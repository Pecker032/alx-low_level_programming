#include <unistd.h>
/**
 * _putchar-write the charater c to stdout
 * @c: thr character to peint
 *
 * Return: on success 1
 * on error,-1 returned, and errno is set appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
