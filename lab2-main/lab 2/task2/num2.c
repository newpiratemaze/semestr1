#include<stdio.h>
#include<locale.h>

void main()
{
	setlocale(LC_ALL, "RUS");
	int N=14, K=23;
	printf("������ %d ����� %d ����� 00 ������\n", N, K);
	printf("���� %d ������ �����\n",N*60+K);
	printf("�� �������� �������� %d ����� %d\n ", 23-N, 60-13);
	printf("� 8:00 ������ %d ������ \n", (13-8)*3600+19*60);
	printf("������� ��� = %d/24 -� ����� ����� � ������� ������ = %d/60 -� ����� ����", N, K);

}