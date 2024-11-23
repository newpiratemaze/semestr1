#include<stdio.h>
#include<locale.h>


void main()
{

	setlocale(LC_ALL, "RUS");

	int x;

	printf("Введите число от 1 до 13:");
	scanf_s("%d", &x);

	

	switch (x)
	{
	case 1:
	{
		printf("%d - Один", x);
		break;
	}
	case 2:
	{
		printf("%d - Два", x);
		break;
	}
	case 3:
	{
		printf("%d - Три", x);
		break;
	}
	case 4:
	{
		printf("%d - Четыре", x);
		break;
	}
	case 5:
	{
		printf("%d - Пять", x);
		break;
	}
	case 6:
	{
		printf("%d - Шесть", x);
		break;
	}
	case 7:
	{
		printf("%d - Семь", x);
		break;
	}
	case 8:
	{
		printf("%d - Восемь", x);
		break;
	}
	case 9:
	{
		printf("%d - Девять", x);
		break;
	}
	case 10:
	{
		printf("%d - Десять", x);
		break;
	}
	case 11:
	{
		printf("%d - Одиннадцать", x);
		break;
	}
	case 12:
	{
		printf("%d - Двенадцать", x);
		break;
	}
	case 13:
	{
		printf("%d - Тринадцать", x);
		break;
	}
	default: printf("Число не соответствует условию");





	}
}