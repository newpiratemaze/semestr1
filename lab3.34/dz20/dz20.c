#include<stdio.h>
#include<locale.h>


void main()
{
	setlocale(LC_ALL, "RUS");

	int	bit;
	printf("Введите пропускную способность в бит/c\n");
	scanf_s("%d", &bit);
	
	int kbyte = bit / 8/1024;
	int bitt = kbyte * 8*1024;
	printf("%d бит/c = %d КБайт/c\n", bit, kbyte);
	printf("%d КБайт/c = %d бит/c \n", bit/8/1024, bitt);
	printf("%d КБайт/c = %d Мбайт/c", kbyte, kbyte / 1024);
	



}