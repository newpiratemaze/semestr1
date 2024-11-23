#include<stdio.h>
#include<locale.h>
#include<math.h>



void main()
{

	setlocale(LC_ALL, "RUS");


	float x;

	printf("¬ведите шаг: ");
	scanf_s("%f", &x);

	
	char h = 'x';
	char f = 'f';
	char sk1 = '(';
	char sk2 = ')';
	



	printf("---------------------\n");
	printf("|%-6c|%9c%c%c%c|\n",h,f,sk1,h,sk2);
	printf("---------------------\n");

	for (float i = 1;i <= 3.01;i = i + x)
	{
		float absew2 = abs(exp(2) - 2);
		float x2 = pow(i, 2);

		float y = absew2 + x2;
		printf("|%-6.1f|%12.2f|\n",i,y);
		printf("---------------------\n");
	}
	







}