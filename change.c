#include "main.h"
/**
 *change - Change function
 *@s: string
 *Return: Null
 */
int (*change(char s))(va_list)
{
	fc specific[] = {
		{"c", rp_char},
		{"s", rp_string},
		{NULL, NULL}};
	int i = 0;

	while (specific[i].c)
	{
		if (strcmp(specific[i].c, &s) == 0)
			return (specific[i].ptr);
		i++;
	}
	return (0);
}
