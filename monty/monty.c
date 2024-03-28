#include "monty.h"
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char buffer[MAX_LINE_CHARS];
int arr[MAX_LINE_CHARS];

instruction_t operations[] = {
	{"push", &_push},
	{"pall", &_pall},
	{NULL, NULL}};

stack_t *stack = NULL;
unsigned int line = 1;

int main(int argc, char **argv)
{
	FILE *fd;
	char **strings = NULL;
	char **tokens = NULL;
	int co = 0, t;
	unsigned int j;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	fd = fopen(argv[1], "r");
	if (fd == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	strings = malloc(MAX_LINES * sizeof(char *));
	if (strings == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	while (fgets(buffer, MAX_LINE_CHARS, fd))
	{
		if (line >= MAX_LINES)
		{
			fprintf(stderr, "Error: Exceeded maximum number of lines\n");
			exit(EXIT_FAILURE);
		}
		strings[line - 1] = malloc(strlen(buffer) + 1);
		if (strings[line - 1] == NULL)
		{
			fprintf(stderr, "Error: malloc failed\n");
			exit(EXIT_FAILURE);
		}
		strcpy(strings[line - 1], buffer);

		tokens = malloc(MAX_LINE_CHARS * sizeof(char *));
		if (tokens == NULL)
		{
			fprintf(stderr, "Error: malloc failed\n");
			exit(EXIT_FAILURE);
		}

		t = 0;
		tokens[t] = strtok(buffer, " \t\n");
		while (tokens[t] != NULL)
		{
			if (strcmp(tokens[t], "push") == 0)
			{
				t++;
				tokens[t] = strtok(NULL, " \t\n");
				if (tokens[t] != NULL)
				{
					char *endptr;
					long num = strtol(tokens[t], &endptr, 10);
					if (*endptr == '\0' && !isspace(*tokens[t]))
					{
						while (operations[co].opcode != NULL)
						{
							if (strcmp(operations[co].opcode, "push") == 0)
							{
								operations[co].f(&stack, num);
								break;
							}
							co++;
						}
					}
					else
					{
						fprintf(stderr, "Error: Invalid number at line %d\n", line);
						exit(EXIT_FAILURE);
					}
				}
				else
				{
					fprintf(stderr, "Error: No argument provided for push at line %d\n", line);
					exit(EXIT_FAILURE);
				}
			}
			else if (strcmp(tokens[t], "pall") == 0)
			{
				while (operations[co].opcode != NULL)
				{
					if (strcmp(operations[co].opcode, "pall") == 0)
					{
						operations[co].f(&stack, line);
						break;
					}
					co++;
				}
			}
			t++;
		}
		free(tokens);
		line++;
	}
	fclose(fd);
	for (j = 0; j < line - 1; j++)
	{
		free(strings[j]);
	}
	free(strings);
	while (stack != NULL)
	{
		stack_t *tmp = stack;
		stack = stack->next;
		free(tmp);
	}

	return 0;
}