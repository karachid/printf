#include "main.h"

/**
 * get_absolutevalue - returns the absolute value of a integer
 * @n: integer
 * Return: unsigned int that represent the abs of n
 */

unsigned int get_absolutevalue(int n)
{
	unsigned int res;

	if (n < 0)
		res = n * -1;
	else
		res = n;
	return (res);
}
