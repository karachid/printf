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

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");


    printf("\n %d \n", len);
    printf("\n %d \n", len2);


    len = _printf("my char is : %c\n", myc);
    len2 = printf("my char is : %c\n", myc);

    printf("\n %d \n", len);
    printf("\n %d \n", len2);

    //_printf("1 - %s", str);
    //printf("2 - %s", str);

 }
