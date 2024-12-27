#include<stdio.h>
#include<locale.h>
#include<math.h>
#define n 10


void main()
{

	setlocale(LC_ALL, "RUS");

	float b[n];
	float a[n];
	float temp;
	float s1 = 0, s2 = 0;
	for (int i = 0;i < n;i++)
	{
		printf("a[%d] = ", i);
		scanf_s("%f", &temp);
		a[i] = temp;
		b[i] = temp;
		s1 += b[i];
	}

	printf("\n");
	//printf("!!!!! %f  !!!!!", b[1]);

	for (int i = 0;i < n;i++)
	{
		a[i] = floor(a[i]);
		s2 += a[i];
		
		printf("a[%d] = %f\n",i, a[i]);
	}

	char *num = "Номер элемента";
	char *ish = "Исходный элемент";
	char *preobr = "Преобразованный элемент";
	printf("-----------------------------------------------------------\n");
	printf("%*s | %*s | %*s\n",5,num,5,ish,5,preobr);
	for (int i = 0;i < n;i++)
	{
		printf("%*d | %*f | %*f\n", 14, i, 16, b[i], 14, a[i]);
	}
	printf("-----------------------------------------------------------\n");

	printf("\n");
	printf("Среднее арифметическое элементов первого массива - %f\n", s1 / n);
	printf("Среднее арифметическое элементов второго массива - %f\n", s2 / n);




}



