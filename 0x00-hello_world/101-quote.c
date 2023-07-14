#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success0
 */

int main(void)
{
char a[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
ssize_t size = sizeof(a) - 1;

write(2, a, size);

return (1);
}
