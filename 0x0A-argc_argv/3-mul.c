#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main -  print the multiplicationof two integer
 * @argc: argument count
 * @argv: Argument vextor
 * Return: 0 if true, 1 if flase
 */
int main(int argc, char * argv[])
{
	int a, b;

	if (argc == 3)
	{	a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a + b);
		return (0);
	}
	printf("Error\n");
	return (1);
}
