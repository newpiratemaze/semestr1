#include<stdio.h>
#include<locale.h>

void main()
{
	setlocale(LC_ALL, "RUS");


	int num, numm;
	puts("������� ����� A ");
	scanf("%d",&num);
	puts("������� ����� B ");
	scanf("%d",&numm);
	printf("������� ����� %d � ����� %d\n ", num, numm);

	printf("����� - %d\n �������� - %d\n ������������ - %d\n ������� - %d\n ������� �� ������� - %d\n", numm + num, numm - num, numm * num, numm / num, numm % num);
}