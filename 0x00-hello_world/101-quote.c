#include<unistd.h>
/**
 * main - entry point
 * Return: zero if success
 */
int main(void)
{
	const char quote[]="and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2,quote,sizeof(quote)-1);
	return (1);
}
