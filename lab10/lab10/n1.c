#include<stdio.h>
#include<locale.h>
#include<math.h>

int x;
float resfunc1;
float resfunc2;


float func1(x);
float func2 (x);


void main()
{
	setlocale(LC_ALL, "RUS");

	printf("Введите значение x: ");
	scanf_s("%d", &x);

	printf("Результат произведения функций равен : %f\n", func1(x) * func2(x));
	printf("Результат разности квадратов функций равен : %f\n", pow(func1(x),2) - pow(func2(x),2));
	printf("Результат удвоенной суммы значений этих функций равен : %f\n", (func1(x) + func2(x))*2);



}



float func1(x)
{

	float x2 = pow(x, 2);
	float x3 = x * 3;
	if (x <= 3)
	{
		resfunc1 = x2 - x3 + 9;
	}
	else if (x > 3)
	{
		float x33 = pow(x, 3);
		float one = 1;
		float znam = x33 + 3;
		resfunc1 = one / znam;
		return resfunc1;
	}

}

	float func2(x)
	{
		float x2 = pow(x, 2);
		float sinx = sin(x2);
		float expsin= exp(sinx);

		resfunc2 = x * expsin;
		return resfunc2;
	}
