#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

void bubble_sort(int array[])
{
	int temp;
	for (int j = 0;j < 10;j++)
	{
		for (int i = 0;i < 9;i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
			}
		}
	}
	printf("Сортировка пузырьками:\n");
	for (int i = 0;i < 10;i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
	printf("\n");
}

void shaker_sort(int array[])
{
	int left = 0;
	int right = 9;
	int temp;
	while(right>left)
	{
		for (int i = left;i < right;i++)
		{
			if (array[i] > array[i+1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
			}
		}
		right--;
		for (int i = right;i > left;i--)
		{
			if (array[i - 1] > array[i])
			{
				temp = array[i - 1];
				array[i - 1] = array[i];
				array[i] = temp;
			}
		}
		left++;
	}
	printf("Шейкерная сортировка:\n");
	for (int i = 0;i < 10;i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
	printf("\n");
	
}
 

void select_sort(int array[])
{
	int temp;
	for (int i = 0;i < 9;i++)
	{
		int min = i;
		for (int j = i + 1;j < 10;j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		temp = array[i];
		array[i] = array[min];
		array[min] = temp;
	}
	printf("Сортировка выбором:\n");
	for (int i = 0;i < 10;i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
	printf("\n");
}


void insert_sort(int array[])
{
	for (int i = 1; i < 10; i++) {
		int key = array[i];
		int j = i - 1;
		while (j >= 0 && array[j] > key) {
			array[j + 1] = array[j];
			j--;
		}
		array[j + 1] = key;
	}

	printf("Сортировка вставками:\n");
	for (int i = 0;i < 10;i++)
	{
		printf("%d ", array[i]);
	}


}

void main()
{
	setlocale(LC_ALL, "RUS");
	int array[] = { -1,5,60,-71,90,22,3,-95,-41,14 };

	printf("Исходный массив:\n");
	for (int i = 0;i < 10;i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
	printf("\n");
	bubble_sort(array);
	shaker_sort(array);
	select_sort(array);
	insert_sort(array);




}