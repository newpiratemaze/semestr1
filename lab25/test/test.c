#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int fill_counters(int array_counters[], int k)
{
	
	for (int i = 0;i < k;i++)
	{
		array_counters[i] = i;
		//printf("%f", array_couners[i]);
	}
	
}

int fill(int array[],int n, int k)
{
	for (int i = 0;i < n;i++)
	{
		array[i] = 1 + rand() % (k - 1);
		//printf("%d ", array[i]);
	}
}


int count(int array_counters[], int array[],int n)
{
	for (int i = 0;i < n;i++)
	{
		array_counters[array[i]]++;
	}
	printf("%f", array_counters);
}



void main()
{
	setlocale(LC_ALL, "RUS");

	int array_counters[100];
	int array[100];
	int n;
	int k;
	printf("¬ведите количество счетчиков - ");
	scanf_s("%d", &k);
	printf("¬ведите количество элементов в массиве - ");
	scanf_s("%d", &n);

	/*for (int i = 0;i < k;i++)
	{
		array[i] = 0;
	}
	for (int i = 0;i < k;i++)
	{
		array[i] = 0;
	}*/
	//printf("%d", array);
	fill_counters(array_counters, k);
	fill(array, n, k);
	count(array_counters, array, n);
}