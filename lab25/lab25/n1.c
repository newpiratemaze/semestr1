#include<stdio.h>
#include<stdlib.h>
#include<locale.h>



void main()
{
	setlocale(LC_ALL, "RUS");

	int m = 1 + rand() % 10;

	int k;
	
	
		printf("������� ����� k - ");

		scanf_s("%d", &k);

		if (k == m)
		{
			printf("����� k � m �����\n");
		}
		else printf("����� k � m �� �����\n");

		printf("���� � �����:\n");
		int num;
		int realnum = 1 + rand() % 998;
		do
		{
		printf("������� ���� ����� (�� 1 �� 999) - ");
		scanf_s("%d", &num);
		
		if (num == realnum)
		{
			printf("�� ��������! ������: \033[32m+1\033[0m\n");

		}
		else if (num < realnum)
		{
			printf("������ ����� ������ ����, ������� �� �����!\n");
			//printf("%d", realnum);
			continue;
		}
		else if (num > realnum)
		{
			printf("������ ����� ������ ����, ������� �� �����!\n");
			//printf("%d", realnum);
			continue;
		}
			
		} while (num != realnum);

}