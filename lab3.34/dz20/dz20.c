#include<stdio.h>
#include<locale.h>


void main()
{
	setlocale(LC_ALL, "RUS");

	int	bit;
	printf("������� ���������� ����������� � ���/c\n");
	scanf_s("%d", &bit);
	
	int kbyte = bit / 8/1024;
	int bitt = kbyte * 8*1024;
	printf("%d ���/c = %d �����/c\n", bit, kbyte);
	printf("%d �����/c = %d ���/c \n", bit/8/1024, bitt);
	printf("%d �����/c = %d �����/c", kbyte, kbyte / 1024);
	



}