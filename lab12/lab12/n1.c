#include<stdio.h>
#include<locale.h>



void main()
{
	setlocale(LC_ALL, "RUS");
	int* pi, i = 5;

	float* pf, f = 2.1f;

	printf("%lu\n", sizeof(pi));

	printf("%lu\n", sizeof(pf));



}