#include<stdio.h>
#include<locale.h>


void main()
{

	setlocale(LC_ALL, "RUS");

	int x;

	printf("������� ����� �� 1 �� 13:");
	scanf_s("%d", &x);

	

	switch (x)
	{
	case 1:
	{
		printf("%d - ����", x);
		break;
	}
	case 2:
	{
		printf("%d - ���", x);
		break;
	}
	case 3:
	{
		printf("%d - ���", x);
		break;
	}
	case 4:
	{
		printf("%d - ������", x);
		break;
	}
	case 5:
	{
		printf("%d - ����", x);
		break;
	}
	case 6:
	{
		printf("%d - �����", x);
		break;
	}
	case 7:
	{
		printf("%d - ����", x);
		break;
	}
	case 8:
	{
		printf("%d - ������", x);
		break;
	}
	case 9:
	{
		printf("%d - ������", x);
		break;
	}
	case 10:
	{
		printf("%d - ������", x);
		break;
	}
	case 11:
	{
		printf("%d - �����������", x);
		break;
	}
	case 12:
	{
		printf("%d - ����������", x);
		break;
	}
	case 13:
	{
		printf("%d - ����������", x);
		break;
	}
	default: printf("����� �� ������������� �������");





	}
}