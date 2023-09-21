#include <stdio.h>

/**
 * hare_tortoise - Prints a message before the main function is executed
 */
void __attribute__((constructor)) hare_tortoise()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
