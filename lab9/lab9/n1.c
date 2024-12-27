#include<stdio.h>
#include<locale.h>
#define ROW 9
#define COL 9


void main()
{
	setlocale(LC_ALL, "RUS");


	int row, col;
	printf("\n");

	for (row = 1;row <= ROW;row++)
	{
		for (col = 1;col <= COL;col++)
			printf("%5d", col * row);
		printf("\n");

	}
	system("pause");

	for (row = 1;row <= ROW;row++)
	{
		for (col = 1;col <= row;col++)
			printf("%5d", col * row);
		printf("\n");

	}

	int n = 40;
	
	int z=4;
	for (int i = 1;i <= z;i++)
	{
		for (int j = 1;j <= 10;j++)
		{
			printf("%d ", n+1);
			n++;

		}
		printf("\n");

	}







	}