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

	printf("��� ������� - a\n");
	printf("����������� �������� ������������� ��������� ������� - %f\n", sum);
	printf("����������� �������� ������������� ��������� ������� - %f\n", sum2);
	printf("����� ������������� ��������� ������� - %f\n", k);
	printf("����� ������������� ��������� ������� - %f\n", k2);
	printf("������� �������� ������������� ��������� ������� - %f\n", res);






}