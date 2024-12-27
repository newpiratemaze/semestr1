#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

void fill_array(float array[], int size)
{
	for (int i = 0;i < size;i++)
	{
		array[i] = rand() % (10 + 10) - 10;
	}
}

void form_array4(float array2[], float array3[], float array4[], int size)
{
	for (int i = 0;i < size;i++)
	{
		array4[i] = 0;
	}
	int j = 0;
	for (int i = 0;i < size;i++)
	{
		if (i % 2 == 0)
		{
			array4[j] = array3[i];
			j++;
		}
	}
	
	float min = 100;
	int minindex;
	for (int i = 0;i < size;i++)
	{
		if (array2[i] < min)
		{
			min = array2[i];
			minindex = i;
		}
	}

	
	for (int i = 0;i < minindex-1;i++)
	{
		array4[i + size / 2] = array2[i];
	}
	
	



}



void main()
{
	setlocale(LC_ALL, "RUS");


	float* array1;
	float* array2;
	float* array3;
	float* array4;
	int size;

	printf("¬ведите размер массива - ");
	scanf_s("%d", &size);

	array1 = (float*)malloc(size * sizeof(float));
	array2 = (float*)malloc(size * sizeof(float));
	array3 = (float*)malloc(size * sizeof(float));
	array4 = (float*)malloc(size * sizeof(float));

	fill_array(array1,size);
	fill_array(array2, size);
	fill_array(array3, size);
	form_array4(array2, array3, array4, size);

	for (int i = 0;i < size;i++)
	{
		printf("array1[%d] - %f \n",i, array1[i]);
	}
	printf("\n");
	for (int i = 0;i < size;i++)
	{
		printf("array2[%d] - %f \n", i, array2[i]);
	}
	printf("\n");
	for (int i = 0;i < size;i++)
	{
		printf("array3[%d] - %f \n", i, array3[i]);
	}
	printf("\n");
	
	for (int i = 0;i < size;i++)
	{
		if (array4[i]!=0)
		printf("array4[%d] - %f \n", i, array4[i]);
	}
	printf("\n");
	free(array4);
	
}