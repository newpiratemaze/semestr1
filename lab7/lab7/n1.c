#include <stdio.h>
#include<locale.h>

int main()

{
	setlocale(LC_ALL, "RUS");

	char c;

	printf("������� ������� 'a','b','c','d' ��� '1', '2', '3', '4', '5': ");

	scanf_s("%c", &c);//���������� � �������

	switch (c)

	{
	case 'a':
	
	case 'b':

	case 'c':

	case 'd':

	case 'e':

		printf("������� �����.\n");

		break;

	case '1':

	case '2':

	case '3':

	case '4':

	case '5':

		printf("������� �����.\n");

		break;

	default:

		printf("����������� ������\n");

	}

	return 0;

}