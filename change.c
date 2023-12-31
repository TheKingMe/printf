#include "main.h"
/**
 *change - Change function
 *@s: string
 *@args: args
 *Return: Null
 */
int change(char s, va_list args)
{
	fc specific[] = {
		{"c", rp_char},
		{"s", rp_string},
		{"d", rp_int},
		{"i", rp_int},
		{"b", rp_binary},
		{"u", rp_u_int},
		{"o", rp_oct},
		{"x", rp_hexa},
		{"X", rp_HEXA},
		{"S", rp_STRING},
		{"p", rp_pointer},
		{"r", rp_reverse},
		{"R", rp_rot13},
		{NULL, NULL}};
	int i = 0;

	while (specific[i].c)
	{
		if (specific[i].c[0] == s)
			return (specific[i].ptr(args));
		i++;
	}
	return (0);
}

