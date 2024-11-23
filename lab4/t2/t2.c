#include<stdio.h>
#include<locale.h>


void main()
{
	


	int a = 11, b = 3;
	int x=a/b;
	float y = a/b;
	double z = a/b;

	printf("int x = %d\n", x);
	printf("float y = %f\n", y);
	printf("double z = %e\n", z);

	printf("float a/b = %f \n double a/b=%e", (float)a / b, (double)a / b);


}