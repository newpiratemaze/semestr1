#include<stdio.h>
#include<locale.h>


void main()
{
	setlocale(LC_ALL, "RUS");

	int a;

	printf("������� ����������� �����: ");
	scanf_s("%d", &a);
	
	//a,b,c,*
	printf("��������� ����� ����� %d: %d\n������ ����� ����� %d: %d\n����� ���� ����� %d: %d\n����� %d ��������: %d%d%d", a, a % 10,a,a/100, a, (a / 100) + (a % 10) + (a % 100 / 10), a, a % 10, a % 100 / 10, a / 100);

	





}