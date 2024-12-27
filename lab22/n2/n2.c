#include<stdio.h>
#include<locale.h>
#include<math.h>

int printrestabul(float (*pfunc)(float), float x1,float x2,float step)
{
	printf("         x | f(x)\n");
	for(float i=x1;i<x2;i+=step)
	{
		float res = pfunc(i);
		printf("%*.2f | %f\n", 10, i, res);
	}
}

float printres(float (*pfunc)(float), float x)
{
	printf("         x | f(x)\n");
	
	float res = pfunc(x);
	printf("%*.2f | %f\n", 10, x, res);
	
}

float yx(float x)
{
	if (x > 0)
	{
	float x3 = pow(x, 3);
	float corex3 = sqrt(x3);
	float lncorex3 = log(corex3);
	
		return lncorex3;
	}
	/*else
	{
		printf("x должен быть больше 0!\n");
		return;
	}*/
}

float vx(float x)
{
	float x2 = x * x;
	float tgx2m1 = tan(x2 - 1);
	float coretgx2m1 = sqrt(tgx2m1);
	float coretgx2m11 = x * 5;

	float m2x = 0 - 2 * x;

	float cosx = cos(x);
	float ecosx = exp(cosx);

	if (x > 1)
	{
		return coretgx2m1;
	}
	if (x >= 0 && x <= 1)
	{
		return m2x;
	}
	if (x < 0)
	{
		return ecosx;
	}


}

//float sx(float x)
//{
//	float xm1 = x - 1;
//	float xp1 = x + 1;
//	float xm1dxp1 = xm1 / xp1;
//	float xm1dxp13 = pow(xm1dxp1, 3);
//	float xm1dxp15 = pow(xm1dxp1, 5);
//	float xm1dxp17 = pow(xm1dxp1, 7);
//
//	float oned3 = 1 / 3;
//	float oned5 = 1 / 5;
//	float oned7 = 1 / 7;
//
//	float res = xm1dxp1 + oned3 * xm1dxp13 + oned5 * xm1dxp15 + oned7 * xm1dxp17;
//	return res;
//}

float sx(float x) {
	double term = (x - 1) / (x + 1);
	double sum = term;
	for (int i = 1; i <= 7; i += 2) {
		sum += (1.0 / i) * pow(term, i);
	}
	return sum;
}

float golden_section(float (*pfunc)(float),float x1, float x2, float step) {
	const float phi = (1 + sqrt(5)) / 2; 
	float res1 = x2 - (x2 - x1) / phi;
	float res2 = x1 + (x2 - x1) / phi;

	while (fabs(x2 - x1) > step) {
		if (pfunc(res1) < pfunc(res2)) {
			x1 = res1;
		}
		else {
			x2 = res2;
		}
		res1 = x2 - (x2 - x1) / phi;
		res2 = x1 + (x2 - x1) / phi;
	}

	printf("Функция принимает максимальное значение в %f\n",x1,x2, (x1 + x2) / 2);
}




void main()
{
	setlocale(LC_ALL, "RUS");
	float x;
	float x1;
	float x2;
	float step;
	int choice;
	int choice2;

	do
	{
		printf("Меню:\n");
		printf("1. Вычислить значение\n");
		printf("2. Табулировать\n");
		printf("3. Выполнить операцию\n");
		printf("0. Выход\n");
		scanf_s("%d", &choice);


		switch (choice)
		{
		case 1:
		{
			printf("Выберите функцию:\n");
			printf("1. Y(X)\n");
			printf("2. V(X)\n");
			printf("3. S(X)\n");
			scanf_s("%d", &choice2);
			switch (choice2)
			{
			case 1:
			{
				printf("Введите x: ");
				scanf_s("%f", &x);
				if (x > 0)
				{
					printres(yx, x);
				}
				else
				{
					printf("x должен быть больше 0!\n");
					break;
				}
				break;
			}
			case 2:
			{
				printf("Введите x: ");
				scanf_s("%f", &x);
				printres(vx, x);
				break;
			
			}
			case 3:
			{
				printf("Введите x: ");
				scanf_s("%f", &x);
				printres(sx, x);
				break;
			}
			}
			break;
		}
		case 2:
		{
			printf("Выберите функцию:\n");
			printf("1. Y(X)\n");
			printf("2. V(X)\n");
			printf("3. S(X)\n");
			scanf_s("%d", &choice2);
			switch (choice2)
			{
			case 1:
			{
				printf("Введите начало интревала: ");
				scanf_s("%f", &x1);
				printf("Введите конец интревала: ");
				scanf_s("%f", &x2);
				printf("Введите шаг интревала: ");
				scanf_s("%f", &step);
				if (x1 > 0)
				{
					printrestabul(yx, x1,x2,step);
				}
				else
				{
					printf("x должен быть больше 0!\n");
					break;
				}
				break;
			}
			case 2:
			{
				printf("Введите начало интревала: ");
				scanf_s("%f", &x1);
				printf("Введите конец интревала: ");
				scanf_s("%f", &x2);
				printf("Введите шаг интревала: ");
				scanf_s("%f", &step);
				printrestabul(vx, x1,x2,step);
				break;

			}
			case 3:
			{
				printf("Введите начало интревала: ");
				scanf_s("%f", &x1);
				printf("Введите конец интревала: ");
				scanf_s("%f", &x2);
				printf("Введите шаг интревала: ");
				scanf_s("%f", &step);;
				printrestabul(sx, x1,x2,step);
				break;
			}
			}
			break;
		}
		case 3:
		{
			printf("Выберите функцию:\n");
			printf("1. Y(X)\n");
			printf("2. V(X)\n");
			printf("3. S(X)\n");
			scanf_s("%d", &choice2);
			switch (choice2)
			{
			case 1:
			{
				printf("Введите начало интревала: ");
				scanf_s("%f", &x1);
				printf("Введите конец интревала: ");
				scanf_s("%f", &x2);
				printf("Введите шаг интревала: ");
				scanf_s("%f", &step);
				if (x1 > 0)
				{
					golden_section(yx, x1, x2, step);
				}
				else
				{
					printf("x должен быть больше 0!\n");
					break;
				}
				break;
			}
			case 2:
			{
				printf("Введите начало интревала: ");
				scanf_s("%f", &x1);
				printf("Введите конец интревала: ");
				scanf_s("%f", &x2);
				printf("Введите шаг интревала: ");
				scanf_s("%f", &step);
				golden_section(vx, x1, x2, step);
				break;

			}
			case 3:
			{
				printf("Введите начало интревала: ");
				scanf_s("%f", &x1);
				printf("Введите конец интревала: ");
				scanf_s("%f", &x2);
				printf("Введите шаг интревала: ");
				scanf_s("%f", &step);;
				golden_section(sx, x1, x2, step);
				break;
			}
			}
			break;
		}
		}
	} while (choice != 0);






}