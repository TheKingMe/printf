#include "main.h"
/**
 * main -test function
 * Return: return 0
 */
int main(void)
{
    int len, len2, x;

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
    printf("%d\n", x);
    _printf("%o", 4);
    printf("\n");
    printf("%o", 4);
    printf("\n");
    _printf("%u\n", -140);
    printf("%u\n", -140);
    printf("%x\n", 0);
    _printf("%x\n", 0);
    printf("%X\n", 0);
    _printf("%R\n", "ilyas10alaa");

    _printf("%R","i");


    return (0);
}
