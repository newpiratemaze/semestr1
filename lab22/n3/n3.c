#include<stdio.h>
#include<locale.h>

int func(int x)
{
	return x * x;
}

int findmax(int (*pfunc)(int), int array[])
{
	int max = -100000000;
	int min = 100000000;
	for (int i = 0;i < 10;i++)
	{
		if (pfunc(array[i]) > max)
		{
			max = pfunc(array[i]);
		}
		if (pfunc(array[i]) < min)
		{
			min = pfunc(array[i]);
		}
	}
	printf("Модуль разности максимального и минимального значений функции равен %d", abs(max - min));
}




void main()
{
	setlocale(LC_ALL, "RUS");
	int array[10];
	for (int i = 0;i < 10;i++)
	{
		printf("a[%d] = ", i);
		scanf_s("%d", &array[i]);
	}

	findmax(func, array);
}