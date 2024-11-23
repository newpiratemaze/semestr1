#include<stdio.h>
#include<locale.h>
#include<math.h>
#define _USE_MATH_DEFINES
#define M_PI 3.14159265358979323846


void main() {

	setlocale(LC_ALL, "RUS");


	float x, y;

	printf("¬ведите значение x: ");
	scanf_s("%f", &x);

	printf("¬ведите значение y: ");
	scanf_s("%f", &y);


	int d = 1;

	float cosy = pow(cos(y), 3);
	float x2d = pow(2, x) * d;
	float ey = exp(y);
	float lnsinx = log(pow(sin(x), 2) + 7.4);

	float fxy = (cosy + x2d) / (ey + lnsinx);
	printf("%f", fxy);





}