#include<stdio.h>
#include<locale.h>
#include<math.h>

#define N 100;

double* fill_elem(double* ptr_array, int n);
int put_elem(double* ptr_array, int n);
double* calc_elem(double* ptr_array, int n);
double sum_elem(double* ptr_array, int begin, int end);
int find_elem(double* ptr_array, int n, double elem);
double find_max_elem(double* ptr_array, int n, int ka);



void main()
{
	setlocale(LC_ALL, "RUS");



	double array[1000];
	int size;


	printf("Введите размер массива - ");
	scanf_s("%d", &size);

	if (size > 1000)
	{
		printf("Размер массива не должен превышать 1000!\n");
	}



	fill_elem(array, size);
	calc_elem(array, size);
	put_elem(array, size);
	sum_elem(array, 2, 5);
	
	/////////////////////////////////////////////////////////
	
	double elem;
	printf("Введите элемент, который нужно найти - ");
	scanf_s("%f", &elem);
	double index = find_elem(array, size, elem);
	if (index != -1)
	{
		printf("%f", index);
	}
	else
	{
		printf("Такого элемента в массиве нет");
	}
	/////////////////////////////////////////////////////////
	int from;
	printf("\nВведите индекс, с которого начинать поиск - ");
	scanf_s("%d", &from);
	array[5] = 100;
	int indd = find_max_elem(array, size, from);
	printf("Индекс максимального элемента массива - %d", indd);





}


double* fill_elem(double* ptr_array, int n)
{
	for (int i = 0;i < n;i++)
	{
		float absew2 = abs(exp(2) - 2);
		float x2 = pow(i, 2);

		double y = absew2 + x2;
		ptr_array[i] = y;


	}

}

int put_elem(double* ptr_array, int n)
{
	for (int i = 0;i < n;i++)
	{
		printf("array[%d] = %f\n", i, ptr_array[i]);
	}
}


double* calc_elem(double* ptr_array, int n) {
	for (int i = 0; i < n; i++) {
		ptr_array[i] = floor(ptr_array[i]);
	}
	return ptr_array;
}

double sum_elem(double* ptr_array, int begin, int end)
{
	double s = 0;
	for (int i = begin;i <= end;i++)
	{
		s += ptr_array[i];
	}
	printf("Сумма элементов массива от индекса %d до индекса %d равна %f\n", begin, end, s);
}

int find_elem(double* ptr_array, int n, double elem)
{
	for (int i = 0;i < n;i++)
	{
		if (ptr_array[i] == elem)
		{
			return ptr_array[i];
			//printf("Индекс найденного элемента - %d", i);
		}
		else return -1;
	}

}

double find_max_elem(double* ptr_array, int n, int ka)
{
	int ind=0;
	double max = 0;
	double* ptr_i;
	int i = ka;
	for (i;i < n;i++)
	{
		if (ptr_array[i] > max)
		{
			max = ptr_array[i];
			ind = i;;
		}
	}
	return ind;
}
