#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

double fill_elements(double array[], int size)
{
	for (int i = 0;i < size;i++)
	{
		array[i] = rand() % 2 - 1;
		printf(" %f ", array[i]);
	}
}
double calc_elements(double array[], double array2[], int size)
{
	for (int i = 0;i < size;i++)
	{
		array2[i] = array[i] / 2;
		printf(" %d ", array2[i]);

	}
}
double put_elements(double array[], double array2[], int size)
{
	for (int i = 0;i < size;i++)
	{
		printf("array[%d] - %f\n", i, array[i]);
	}
	for (int i = 0;i < size;i++)
	{
		printf("array2[%d] - %f\n", i, array2[i]);
	}
	/*prdoublef("1:\n  %d \n", array);
	prdoublef("2:\n  %d ", array2);*/

}

//int delete_k(double array[], int size, int k)
//{
//
//	/* ptr_arr - адрес массива
//
//	   size - число элементов
//
//	   k - индекс удаляемого элемента  */
//
//	int n = size - 1;
//
//	for (int i = k; i < (size - 1); i++) array[i] = array[i + 1];
//
//	return n;//возвращает число элементов массива
//
//}


//int delete_k(double array[], int size, int a)
//{
//	for (int j = 0;j < size;j++)
//	{
//		for (int i = 0;i < size - 1;i++)
//		{
//			if (array[i] > a)
//			{
//				array[i] = array[i + 1];
//			}
//		}
//	}
//	int k;
//	for (int i = size;i > 0;i--)
//	{
//		if (array[i] < 0)
//		{
//			k = i;
//			break;
//		}
//	}
//	array[k + 1] = -999;
//	for (int i = 0;i < size;i++)
//	{
//		printf("new array[%d] - %f\n", i, array[i]);
//	}
//	if (array[size]<0 )
//	{
//		printf("-999");
//	}
//}



int delete_k (double* ptr_arr, int size, int a) {

/* ptr_arr - адрес массива

   size - число элементов

   k - индекс удаляемого элемента  */

   int n = size-1;
  //for (int j=0;j<size;j++)
   //{
	   for (int i = a; i < (size - 1); i++) ptr_arr[i] = ptr_arr[i + 1];
   //}

	   for (int i=0;i < size;i++)
	   {
		   printf("array[%d] = %f\n", i, ptr_arr[i]);
	   }
	   

}

void main()
{
	setlocale(LC_ALL, "RUS");

	double* array;
	double* array2;
	int size;
	printf("Введите размер массива - ");
	scanf_s("%d", &size);

	array = (double*)malloc(size * sizeof(double));
	array2 = (double*)malloc(size * sizeof(double));
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

	int a;
	printf("Введите А - ");
	scanf_s("%d", &a);

	delete_k(array2, size, a);
	


	free(array);
	free(array2);

}