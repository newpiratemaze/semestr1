#include<stdio.h>
#include<locale.h>
#include<stdlib.h>

int fill(int array[][7]);
int put(int array[][7]);
int trans(int array[][7]);
int mid(int array[][7]);
int count_str(int array[][7]);
int count_stolb(int array[][7]);
int count_str_stolb(int array[][7]);
int findmax(int array[][7]);


void main()
{
	setlocale(LC_ALL, "RUS");
	
	int array[7][7];

	fill(array);
	put(array);
	trans(array);
	mid(array);
	count_str(array);
	count_stolb(array);
	count_str_stolb(array);
	findmax(array);

	
	
	

	


}


int fill(int array[][7])
{
	for (int i = 0;i < 7;i++)
	{
		for (int j = 0;j < 7;j++)
		{
			array[i][j] = (rand() % 21) - 10;
		}
	}
}
int put(int array[][7])
{
	printf("Исходный:\n");
	for (int i = 0;i < 7;i++)
	{
		for (int j = 0;j < 7;j++)
		{
			printf("%*d ", 3, array[i][j]);
		}
		printf("\n");
	}
}
int trans(int array[][7])
{
	printf("Транспонированный:\n");
	for (int i = 0;i < 7;i++)
	{
		for (int j = 0;j < 7;j++)
		{
			printf("%*d ", 3, array[j][i]);
		}
		printf("\n");
	}
}
int mid(int array[][7])
{
	float sredn = 0;
	float k = 0;
	for (int j = 0;j < 7;j++)
	{
		if (array[3][j] % 3 == 0)
		{
			sredn += array[3][j];
			k += 1;
		}
	}
	printf("\n");
	printf("Среднее арифметическое элементов четвертной строки, кратных трем - %f\n", sredn / k);
}
int count_str(int array[][7])
{
	int str = 0;
	for (int i = 0;i < 7;i++)
	{
		for (int j = 0;j < 6;j++)
		{
			if (array[i][j] == array[i][j + 1])
			{
				str++;
			}
		}

	}
	printf("Количество пар одинаковых элементов (при просмотре по строкам) - %d\n", str);
}
int count_stolb(int array[][7])
{
	int stolb = 0;

	for (int i = 0;i < 7;i++)
	{
		for (int j = 0;j < 6;j++)
		{
			if (array[i][j] == array[i + 1][j])
			{
				stolb++;
				//printf("%d(%d;%d) - %d(%d;%d)\n", array[i][j],i,j, array[i+1][j],i+1,j);
			}
		}

	}
	printf("Количество пар одинаковых элементов (при просмотре по стобцам) - %d\n", stolb);
}
int count_str_stolb(int array[][7])
{
	int strstolb = 0;

	for (int i = 0;i < 7;i++)
	{
		for (int j = 0;j < 6;j++)
		{
			if (array[i][j] == array[i + 1][j] && array[i][j] == array[i][j + 1])
			{
				strstolb++;
				//printf("%d(%d;%d) - %d(%d;%d)\n", array[i][j],i,j, array[i+1][j],i+1,j);
			}
		}

	}

	printf("Количество пар одинаковых элементов (при просмотре по строкам и стобцам) - %d\n", strstolb);

}
int findmax(int array[][7])
{
	int maxi = 0;
	int maxj = 0;
	int max = -11;
	for (int i = 0;i < 7;i++)
	{
		for (int j = 0;j < 7;j++)
		{
			if (array[i][j] >= max)
			{
				max = array[i][j];
				maxi = i;
				maxj = j;
			}
		}
	}
	printf("Координаты самого нижнего максимального элемента - (%d;%d)", maxi, maxj);
}
