#include<locale.h>
#include<stdio.h>

void date()
{
	puts("__  __     __  ___    __   __  __  /        ");
	puts(" |  ||     ||  |       |   ||  ||  |__       ");
	puts("/   ||     ||  ___    /    ||  ||  | |       ");
	puts("__  __  *  __    /  * __   __  __  ___        ");
}




void name()
{
	setlocale(LC_ALL, "RUS");
	puts("*******************************************");
	puts("*                                         *");
	puts("* ����: ���������� ����������� ���������� *");
	puts("* ��������: ������� ������                *");
	puts("*                                         *");
	puts("*******************************************");
}



void main()
{
	
	name();
	date();
}