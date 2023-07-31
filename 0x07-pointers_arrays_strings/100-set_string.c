/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Pointer to a pointer to a char (double pointer).
 * @to: Pointer to the char to set the pointer to.
 *
 * Return: Nothing.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
