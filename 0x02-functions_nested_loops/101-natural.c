#include <stdio.h>
int main(void)
{
	int natural = 1, sum = 0;

	for (; natural < 1024; natural++)
	{
		if ((natural % 3 == 0) || (natural % 5 == 0))
			sum += natural;
	}
	printf("%i", sum);
}
