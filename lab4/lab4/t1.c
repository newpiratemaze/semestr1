#include <stdio.h> 
#include <locale.h> 

int main() {
	setlocale(LC_ALL, "RUS");
	char c;
	int i;
	float f;
	double d;
	puts("������� ������:");
	scanf_s("%c", &c);
	puts("������� ����� �����:");
	scanf_s("%d", &i);
	puts("������� ������������ �����:");
	scanf_s("%f", &f);
	puts("������� ������� ������������ �����");
	scanf_s("%e", &d);
	printf("char: %c\n int: %d \n float: %f \n Double: %e\n", c, i, f, d*(-1));
	
	
	int intf = (int)f;
	float ost = f - intf;
	printf(" 1�. ����� �����: %d, ������� �����: %f\n", intf, ost);
	printf("1�. ������������ ��� ������� %c: % d\n", c, c);

	
	printf("����������������� ��� ������� %c: %x\n", c, c);
	printf("������������ ��� ������� %c: %o\n", c, c);

	float v = 1/i;
	printf(" ������� 1�. ���������� �����, �������������� 1/%d: %f", i, v);


}