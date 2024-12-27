#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<time.h>


void fill_array(int array[], int n)
{
	for (int i = 0;i < n;i++)
	{
		array[i] = rand() %(1000+1000)-1000;
	}
}


void put_array(int array[], int n)
{
	printf("Исходный массив:\n");
	for (int i = 0;i < n;i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
	printf("\n");
}





void bubble_sort(int array[],int n)
{
	int temp;
	for (int j = 0;j < n;j++)
	{
		for (int i = 0;i < n-1;i++)
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
	for (int i = 0;i < n;i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
	printf("\n");
}

void shaker_sort(int array[], int n)
{
	int left = 0;
	int right = n - 1;
	int temp;
	while (right > left)
	{
		for (int i = left;i < right;i++)
		{
			if (array[i] > array[i + 1])
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
	for (int i = 0;i < n;i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
	printf("\n");

}


void select_sort(int array[],int n)
{
	int temp;
	for (int i = 0;i < n-1;i++)
	{
		int min = i;
		for (int j = i + 1;j < n;j++)
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
	for (int i = 0;i < n;i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
	printf("\n");
}


void insert_sort(int array[],int n)
{
	for (int i = 1; i < n; i++) {
		int key = array[i];
		int j = i - 1;
		while (j >= 0 && array[j] > key) {
			array[j + 1] = array[j];
			j--;
		}
		array[j + 1] = key;
	}

	printf("Сортировка вставками:\n");
	for (int i = 0;i < n;i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
	printf("\n");

}

void main()
{
	setlocale(LC_ALL, "RUS");
	
	int n;
	printf("Введите размер массива: ");
	scanf_s("%d", &n);
	int* array = malloc(n * sizeof(int));

	fill_array(array,n);
	put_array(array, n);
	
	clock_t t = clock();
	bubble_sort(array, n);
	float time1 = (float)(clock() - t) / CLOCKS_PER_SEC;
	printf("Время работы пузырьковой сортировки: %f\n", time1);
	shaker_sort(array, n);
	float time2 = (float)(clock() - t) / CLOCKS_PER_SEC;
	printf("Время работы шейкерной сортировки: %f\n", time2-time1);
	select_sort(array, n);
	float time3 = (float)(clock() - t) / CLOCKS_PER_SEC;
	printf("Время работы сортировки выбором: %f\n",time3-time2);
	insert_sort(array, n);
	float time4 = (float)(clock() - t) / CLOCKS_PER_SEC;
	
	printf("Время работы сортировки вставками: %f\n", time4-time3);




}