#include<stdio.h>
#include<locale.h>


void main()
{

	/* Контрольный пример:
	При x=3: 1/(3+6) = 1/9=0,1111111111111111*/
	setlocale(LC_ALL, "RUS");

	int x;
	printf("Введите значение x: ");
	scanf_s("%d", &x);

	float f = 1;
	float fx = x + 6;
	float resf = f / fx;
	
	int func = x <= 1 ? printf("Функция при x = %d равна 0", x) : printf("Функция при x = %d равна %f",x, resf);
}