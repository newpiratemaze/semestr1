#include<stdio.h>
#include<locale.h>
#include<math.h>

#define N 100;

double* fill_elem(double *ptr_array, int n);
int put_elem(double* ptr_array, int n);
double* calc_elem(double* ptr_array, int n);


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

	




}


double* fill_elem(double *ptr_array, int n)
{
	for (int i = 0;i < n;i++)
	{
		float absew2 = abs(exp(2) - 2);
		float x2 = pow(i, 2);

		double y = absew2 + x2;
		ptr_array[i] = y;
		

	}
	
}

int put_elem(double* ptr_array,int n)
{
	for (int i = 0;i < n;i++)
	{
		printf("array[%d] = %f\n",i, ptr_array[i]);
	}
}


double* calc_elem(double* ptr_array, int n) {
	for (int i = 0; i < n; i++) {
		ptr_array[i] = floor(ptr_array[i]);
	}
	return ptr_array;
}