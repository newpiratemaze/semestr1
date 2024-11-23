#include<stdio.h>
#include<locale.h>



void main()
{

	setlocale(LC_ALL, "RUS");

	int n;
	for (int start = 1; start <= 10; start++) printf("*");


	printf("\n¬ведите количество выводимых символов: ");
	scanf_s("%d", &n);
	printf("+");
	for (int start = 1; start <=n; start++) printf("*");
	printf("+");
	printf("\n");
	for (int s = 1; s <= n/2;s++)
	{
		printf("+");
	}

	for (int s = 1; s <= n / 2;s++)
	{
		printf("-");
	}
	printf("\n");

	for (int s = 1; s <= n ;s++)
	{
		printf("+!");
	}


}