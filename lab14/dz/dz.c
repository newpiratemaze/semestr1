#include<stdio.h>
#include<locale.h>

int fill(int array[], int n);
int put(int array[], int n);
int count(int array[], int a, int b);


void main()
{
	setlocale(LC_ALL, "RUS");
	int array[1000];
	int size;
	printf("������� ������ ������� - ");
	scanf_s("%d", &size);

	fill(array, size);
	put(array, size);

	int a, b;
	printf("������� ������ ��������� � - ");
	scanf_s("%d", &a);
	printf("������� ������ ��������� B - ");
	scanf_s("%d", &b);

	count(array, a, b);
}

int fill(int array[], int n)
{
	for (int i = 0;i < n;i++)
	{
		array[i] = i * i;
	}
}

int put(int array[], int n)
{
	for (int i = 0;i < n;i++)
	{
		printf("a[%d] = %d\n", i, array[i]);
	}
}

int count(int array[], int a, int b)
{
	int amount = 0;
	for (int i = a;i <= b;i++)
	{
		amount++;
	}
	printf("� ��������� �������� �� %d �� %d ��������� %d �����(-��)\n", a, b, amount);
}