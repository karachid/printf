#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int len = 0;
	int len2 = 0;
	char myc = 'a';
	char *str = "engineer";

	len = _printf("Let's try \"to\" printf a simple sentence.\n");
	len2 = printf("Let's try \"to\" printf a simple sentence.\n");

	printf("\n %d \n", len);
	printf("\n %d \n", len2);


	len = _printf("my char is : %c and my string is : %s and here is a percent %%\n", myc, str);
	len2 = printf("my char is : %c and my string is : % s and here is a percent %%\n", myc, str);

	printf("\n %d \n", len);
	printf("\n %d \n", len2);

	len = _printf("my string is : %s\n", str);
	len2 = printf("my string is : %s\n", str);

	printf("\n _printf string case : %d \n", len);
	printf("\n printf string case : %d \n", len2);

	len = printf("my percent is : %%\n");
	len2 = _printf("my percent is : %%\n");

	printf("\n %d \n", len);
	printf("\n %d \n", len2);

	return (0);
}
