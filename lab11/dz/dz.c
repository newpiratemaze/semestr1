#include<stdio.h>
#include<locale.h>
#include<math.h>



void main()
{
	setlocale(LC_ALL, "rus");

	int n=5;
	/*printf("Введите количество элементов массива (n) - ");
	scanf_s("%d", &n);*/

	int a[5];
	
	int temp;
	int min = 10000;
	int res = 0;
	int c = 0;

	for (int i = 0;i < n;i++)
	{
		printf("a[%d] = ", i);
		scanf_s("%d", &temp);
		a[i] = temp;
		if ((a[i] <= min))
		{

			min = a[i];
			c += 1;
			
		}
		
		
	}
	//printf("min = %d\n", min);

	for (int i = 0;i < n;i++)
	{
		if (a[i] == min)
		{
			for (c;c <= 4;c++)
			{
				res += a[c];
			}
		}
		
		
	}

	printf("Сумма трех соседних элементов массива, расположенных после минимального элемента = %d\n", res);
	/*for (int i = 0;i < n;i++)
	{
		printf("a[%d] = %d\n", i, a[i]);
	}*/


}