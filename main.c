#include "main.h"
#include <wchar.h>
/**
 * main -test function
 * Return: return 0
 */
int main(void)
{
    int len, len2, x, z;
    wchar_t wide_string1[] = L"Hello, 你好, नमस्ते";
    wchar_t wide_string2[] = L"";
    wchar_t wide_string3[] = L"\x01\x02\x03\x04\x05\x06\x07\x08\x09\x0A\x0B\x0C\x0D\x0E\x0F\x10";


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
    _printf("%X\n", 0);
    z = _printf("%S\n", "Best\nSchool");
    _printf("%d\n", z);

    _printf("Wide string 1: %S\n", wide_string1);
    _printf("Wide string 2: %S\n", wide_string2);
    _printf("Wide string 3: %S\n", wide_string3);
    printf("Wide string 1: %S\n", wide_string1);
    printf("Wide string 2: %S\n", wide_string2);
    printf("Wide string 3: %S\n", wide_string3);

    return (0);
}
