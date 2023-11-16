#include "lists.h"

/**
 * before_main - prints output before main function.
 *
 * Return: Void.
 */

void  __attribute__((constructor)) before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
