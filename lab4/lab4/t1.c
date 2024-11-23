#include <stdio.h> 
#include <locale.h> 

int main() {
	setlocale(LC_ALL, "RUS");
	char c;
	int i;
	float f;
	double d;
	puts("Введите символ:");
	scanf_s("%c", &c);
	puts("Введите целое число:");
	scanf_s("%d", &i);
	puts("Введите вещественное число:");
	scanf_s("%f", &f);
	puts("Введите большое вещественное число");
	scanf_s("%e", &d);
	printf("char: %c\n int: %d \n float: %f \n Double: %e\n", c, i, f, d*(-1));
	
	
	int intf = (int)f;
	float ost = f - intf;
	printf(" 1а. Целая часть: %d, дробная часть: %f\n", intf, ost);
	printf("1б. Десятеричный код символа %c: % d\n", c, c);

	
	printf("Шестнадцатеричный код символа %c: %x\n", c, c);
	printf("Восьмеричный код символа %c: %o\n", c, c);

	float v = 1/i;
	printf(" Задание 1в. Десятичное число, соотвествующее 1/%d: %f", i, v);


}