#include "main.h"

/**
 * main - tests the _printf
 * Return: 0
 */
int main(void)
{
	int len, len1, len2;

	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	len = _printf("Character:[%c]\n", 'H');
	len = printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	len1 = _printf("String:[%s]\n", "I am a string !");
	len1 = printf("String:[%s]\n", "I am a string !");
	_printf("Percent:[%%]\n");
	printf("Percent:[%%]\n");
	len2 = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len);
	_printf("Len1:[%d]\n", len1);
	printf("Len1:[%d]\n", len1);
	_printf("Len2:[%d]\n", len2);
	printf("Len2:[%d]\n", len2);
	return (0);
}
