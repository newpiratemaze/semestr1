#include<stdio.h>
#include<locale.h>
#include<math.h>



float a[100];
int j = 0;
float sum = 0;
float sum2 = 0;
float k = 0;
float k2 = 0;

float funcelem(float i)
{

	float absew2 = abs(exp(2) - 2);
	float x2 = pow(i, 2);

	float y = absew2 + x2;
	return y;
}

void main()
{
	setlocale(LC_ALL, "RUS");





	for (float i = 1;i <= 3;i = i+0.02)
	{
		
		if (j == 100)
			break;
		
		a[j] = funcelem(i);
		printf("a[%d] = %f\n", j, a[j]);

		if (a[j] > 0)
		{
			k += 1;
			sum += a[j];
		}
		else
		{
			k2 += 1;
			sum2 += a[j];
		}



		j += 1;
		
	}


	float res = sum / k;

	printf("Имя массива - a\n");
	printf("Накопленное значение положительных элементов массива - %f\n", sum);
	printf("Накопленное значение отрицательных элементов массива - %f\n", sum2);
	printf("Число положительных элементов массива - %f\n", k);
	printf("Число отрицательных элементов массива - %f\n", k2);
	printf("Среднее значение положительных элементов массива - %f\n", res);






}