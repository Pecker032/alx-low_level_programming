#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry
 *
 * Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	return (0);
}