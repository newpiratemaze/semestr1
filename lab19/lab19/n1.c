#include<stdio.h>
#include<locale.h>





void main()
{
	setlocale(LC_ALL, "RUS");
	printf("������ � ����...\n");

	FILE* file = fopen("number.txt", "a");
	fprintf(file, "5\n");
	
	printf("������ ������� ���������...\n");
	printf("���������� ������ � ����...\n");

	
	fprintf(file, "12,56\n");
	fclose(file);
	printf("������ ������� ���������...\n");
}