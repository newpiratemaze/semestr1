#include<stdio.h>
#include<locale.h>


#include<math.h>
#define _USE_MATH_DEFINES

void main()
{
	setlocale(LC_ALL, "RUS");

	float x;
	float k = 1.2;

	printf("¬ведите значение x:");
	scanf_s("%f", &x);
	//printf("%f\n", pow(k, 5));

	float a = exp(k * x);
	
	float b = pow(log(x), 2) + pow(k, 5);

	float c = pow(a, 2) + pow(b, 2);
	float aa = 1;
	float bb = 3;

	float del = aa/bb;
	//printf("%f\n",del);
	float y = pow(c, del);

	printf("x = %f\n", x);
	printf("a = %f\n", a);
	printf("b = %f\n", b);
	printf("y = %.2f\n", y);

}