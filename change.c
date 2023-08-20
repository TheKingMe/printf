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
		{"d", rp_int},
		{"i", rp_int},
		{NULL, NULL}};
	int i = 0;

	while (specific[i].c)
	{
		if (*(specific[i].c) == s)
			return (specific[i].ptr);
		i++;
	}
	return (0);
}
