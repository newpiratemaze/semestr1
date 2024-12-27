#include<stdio.h>
#include<stdlib.h>
#include<locale.h>



void main()
{
	setlocale(LC_ALL, "RUS");

	int m = 1 + rand() % 10;

	int k;
	
	
		printf("Введите число k - ");

		scanf_s("%d", &k);

		if (k == m)
		{
			printf("Числа k и m равны\n");
		}
		else printf("Числа k и m не равны\n");

		printf("Игра в кости:\n");
		int num;
		int realnum = 1 + rand() % 998;
		do
		{
		printf("Введите ваше число (от 1 до 999) - ");
		scanf_s("%d", &num);
		
		if (num == realnum)
		{
			printf("Вы выиграли! Баланс: \033[32m+1\033[0m\n");

		}
		else if (num < realnum)
		{
			printf("Нужное число больше того, которое вы ввели!\n");
			//printf("%d", realnum);
			continue;
		}
		else if (num > realnum)
		{
			printf("Нужное число меньше того, которое вы ввели!\n");
			//printf("%d", realnum);
			continue;
		}
			
		} while (num != realnum);

}