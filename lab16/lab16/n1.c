#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int fill_elements(int array[], int size)
{
	for (int i = 0;i < size;i++)
	{
		array[i] = i * i;
		printf(" %d ", array[i]);
	}
}
int calc_elements(int array[], int array2[], int size)
{
	for (int i = 0;i < size;i++)
	{
		array2[i] =array[i]/ 2;
		printf(" %d ", array2[i]);
		
	}
}
int put_elements(int array[], int array2[], int size)
{
	for (int i = 0;i < size;i++)
	{
		printf("array[%d] - %d\n", i, array[i]);
	}
	for (int i = 0;i < size;i++)
	{
		printf("array2[%d] - %d\n", i, array2[i]);
	}
	/*printf("1:\n  %d \n", array);
	printf("2:\n  %d ", array2);*/

}


void main()
{
	setlocale(LC_ALL, "RUS");
	
	int* array;
	int* array2;
	int size;
	printf("¬ведите размер массива - ");
	scanf_s("%d", &size);

	array = (int*)malloc(size * sizeof(int));
	array2 = (int*)malloc(size * sizeof(int));
	if (array == NULL) {

		puts("error");

		return -1;

	}
	if (array2 == NULL) {

		puts("error");

		return -1;

	}
	fill_elements(array, size);
	printf("\n");
	calc_elements(array, array2, size);
	printf("\n");
	put_elements(array, array2, size);

	free(array);
	free(array2);

}