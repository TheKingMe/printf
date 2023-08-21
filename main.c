#include "main.h"
/**
 * main -test function
 * Return: return 0
 */
int main(void)
{
	int len, len2, x, y;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	x = _printf("%b", -98);
	printf("\n");
	y = printf("%b", -98);
	printf("%d\n", x);
	printf("%d", y);
	return (0);
}
