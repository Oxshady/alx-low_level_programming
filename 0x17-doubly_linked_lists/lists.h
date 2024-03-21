#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct dlistint
{
	int n;
	struct dlistint *prev;
	struct dlistint *next;
} dlistint_t;
size_t print_dlistint(const dlistint_t *h);
#endif
