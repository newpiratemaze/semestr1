#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int rand10(int mmax)
{
	int rrand10 = 1 + rand() % (mmax - 1);
	printf("������������ ����� �� 1 �� %d = %d\n", mmax, rrand10);
}
float rand_double(float dmin, float dmax)
{
	
	
	/*printf("%f\n", dmin);
	printf("%f\n", dmax);*/
	float rdouble = dmin + rand() % (int)(dmax - dmin); 

	
	printf("������������ ����� �� %f �� %f = %f\n", dmin, dmax, rdouble);
}

int* rrand10(int n, int mmax)
{
	printf("%d ������������ ����� �� 1 �� %d:\n", n, mmax);
	for (int i = 0;i < n;i++)
	{
		int rrand10 = rand10(mmax);
		printf("%d\n", rrand10);
		//rrand10 = '\0';
	}
	printf("\n");
}
float* rrand_double(int n, float dm)
{
	printf("%d ������������ ����� �� -%f �� +%f: \n", n, dm, dm);
	for (int i = 0;i < n;i++)
	{
		float rrandd = rand_double(-dm,dm);
		//printf("%f\n", rrandd);
	}
}

void main()
{
	setlocale(LC_ALL, "RUS");

	int mmax;
	printf("������� ������������ ���������� ����� - ");
	scanf_s("%d", &mmax);

	rand10(mmax);
	
	float dmin, dmax;
	printf("������� ����������� ����� - ");
	scanf_s("%f", &dmin);
	printf("������� ������������ ����� - ");
	scanf_s("%f", &dmax);
	rand_double(dmin, dmax);

	int n;
	printf("������� ���������� ����� - ");
	scanf_s("%d", &n);
	rrand10(n, mmax);

	float dm;
	printf("������� ����� - ");
	scanf_s("%f", &dm);
	printf("\n");
	rrand_double(n, dm);


}