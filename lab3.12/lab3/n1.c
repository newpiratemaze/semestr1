#include<stdio.h>
#include<locale.h>

void main()
{
	setlocale(LC_ALL, "RUS");


	int num, numm;
	puts("введите число A ");
	scanf("%d",&num);
	puts("введите число B ");
	scanf("%d",&numm);
	printf("Введено число %d и число %d\n ", num, numm);

	printf("Сумма - %d\n Разность - %d\n Произведение - %d\n Частное - %d\n Остаток от деления - %d\n", numm + num, numm - num, numm * num, numm / num, numm % num);
}