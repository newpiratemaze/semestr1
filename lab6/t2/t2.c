#include<stdio.h>
#include<locale.h>


void main()
{

	/* ����������� ������:
	��� x=3: 1/(3+6) = 1/9=0,1111111111111111*/
	setlocale(LC_ALL, "RUS");

	int x;
	printf("������� �������� x: ");
	scanf_s("%d", &x);

	float f = 1;
	float fx = x + 6;
	float resf = f / fx;
	
	int func = x <= 1 ? printf("������� ��� x = %d ����� 0", x) : printf("������� ��� x = %d ����� %f",x, resf);
}