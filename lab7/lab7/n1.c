#include <stdio.h>
#include<locale.h>

int main()

{
	setlocale(LC_ALL, "RUS");

	char c;

	printf("Введите символы 'a','b','c','d' или '1', '2', '3', '4', '5': ");

	scanf_s("%c", &c);//считывание с консоли

	switch (c)

	{
	case 'a':
	
	case 'b':

	case 'c':

	case 'd':

	case 'e':

		printf("Введена буква.\n");

		break;

	case '1':

	case '2':

	case '3':

	case '4':

	case '5':

		printf("Введена цифра.\n");

		break;

	default:

		printf("Неизвестный символ\n");

	}

	return 0;

}