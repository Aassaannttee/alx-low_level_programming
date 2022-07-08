#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "main.h"

/**
 * main - assign a random number to the variable n each time it is executed
 * and prints out based on condition
 * Return: Always 0 (Success)
*/

void positive_or_negative(int i)
{

	srand(time(0));
	i = rand() - RAND_MAX / 2;

	if (i > 0)
	{
		printf("%d is %s\n", i,	"positive");
	}
	else if (i < 0)
	{
		printf("%d is %s\n", i, "negative");
	}
}
