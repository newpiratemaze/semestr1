#include<stdio.h>
#include<locale.h>

int fill(int array[], int n);
int put(int array[], int n);
int count(int array[], int a, int b);
int sum(int array[], int beginn, int endd);
int find(int array[], int n, int elemm);


void main()
{
	setlocale(LC_ALL, "RUS");
	int array[1000];
	int size;
	printf("Введите размер массива - ");
	scanf_s("%d", &size);

	fill(array, size);
	put(array, size);

	int a, b;
	printf("Введите начало диапазона А - ");
	scanf_s("%d", &a);
	printf("Введите начало диапазона B - ");
	scanf_s("%d", &b);
	

	count(array, a, b);

	int begin, end;
	printf("Введите индекс начала - ");
	scanf_s("%d", &begin);
	printf("Введите индекс конца - ");
	scanf_s("%d", &end);

	sum(array, begin, end);

	int elem;
	printf("Введите элемент, который нужно найти - ");
	scanf_s("%d", &elem);

	find(array, size, elem);
}

int fill(int array[], int n)
{
	for (int i = 0;i < n;i++)
	{
		array[i] = i * i;
	}
}

int put(int array[], int n)
{
	for (int i = 0;i < n;i++)
	{
		printf("a[%d] = %d\n", i, array[i]);
	}
}

int count(int array[], int a, int b)
{
	int amount = 0;
	for (int i = a;i <= b;i++)
	{
		amount++;
	}
	printf("В диапазоне индексов от %d до %d находится %d числа(-ел)\n", a, b, amount);
}

int sum(int array[], int beginn, int endd)
{
	int sum = 0;
	for (int i = beginn;i <= endd;i++)
	{
		sum += array[i];
	}
	printf("Сумма элементов от индекса %d до индекса %d равно %d\n", beginn, endd, sum);
}

int find(int array[], int n, int elemm)
{
	for (int i = 0;i < n;i++)
	{
		if (array[i] == elemm)
		{
			printf("Введенный элемент найден по индексу %d", i);
		}
		else printf("Такого элемента в массиве нет");
	}
}