#include<stdio.h>
#include<locale.h>


#include<math.h>
#define _USE_MATH_DEFINES
#define M_PI 3.14159265358979323846

void main()
{

	setlocale(LC_ALL, "RUS");

	float gr;

	printf("¬ведите угол в градусах:");
	scanf_s("%f", &gr);

	float rad;

	rad = sin((gr * M_PI) / 180);

	printf("%f", rad);

	






}