#include<stdio.h>
#include<locale.h>


void main()
{
	setlocale(LC_ALL, "RUS");


	int y;
	printf("Введите год: ");
	scanf_s("%d", &y);

	if ((y % 4 == 0) * (y % 100 != 0)) {
		printf("%d год високосный", y);
	}
	else if (y % 400 == 0) {
		printf("%d год високосный", y);
	}
	else {
		printf("%d год не високосный",y);
	}


}