#include<stdio.h>
#include<locale.h>


void main()
{
	setlocale(LC_ALL, "RUS");

	int a;

	printf("Введите трехзначное число: ");
	scanf_s("%d", &a);
	
	//a,b,c,*
	printf("Последняя цифра числа %d: %d\nПервая цифра числа %d: %d\nСумма цифр числа %d: %d\nЧисло %d наоборот: %d%d%d", a, a % 10,a,a/100, a, (a / 100) + (a % 10) + (a % 100 / 10), a, a % 10, a % 100 / 10, a / 100);

	





}