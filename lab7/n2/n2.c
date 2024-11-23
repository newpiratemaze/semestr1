#include<stdio.h>
#include<locale.h>
#include<math.h>

void main()
{
	setlocale(LC_ALL, "RUS");

	
	float x, y;
	char c;


	printf("Введите функцию: ");
	
	scanf("%f%c%f",&x,&c, &y);
	

	



	switch (c)
	{
	case '+':
	{
		printf("%f", x + y);
		break;
	}
	case '-':
	{
		printf("%f", x - y);
		break;
	}

	case '*':
	{
		printf("%f", x*y);
		break;
	}

	case '/':
	{
		printf("%f", x / y);
		break;
	}
	case '^':
	{
		printf("%f", pow(x, y));
		break;
	}
	default: printf("Неопределенная операция");
	}

	




}