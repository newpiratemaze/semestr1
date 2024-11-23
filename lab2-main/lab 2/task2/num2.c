#include<stdio.h>
#include<locale.h>

void main()
{
	setlocale(LC_ALL, "RUS");
	int N=14, K=23;
	printf("Сейчас %d часов %d минут 00 секунд\n", N, K);
	printf("Идет %d минута суток\n",N*60+K);
	printf("До полуночи осталось %d часов %d\n ", 23-N, 60-13);
	printf("с 8:00 прошло %d секунд \n", (13-8)*3600+19*60);
	printf("Текущий час = %d/24 -я часть суток и текущая минута = %d/60 -я часть часа", N, K);

}