#include<stdio.h>
#include<locale.h>



void main()
{
	setlocale(LC_ALL, "rus");

	float array[] = { 1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9,10.10 };
	float* ptr_a;
	ptr_a = &array[0];

	printf("1. %p\n", array);
	printf("2. %p\n", &array[0]);
	printf("3. %p\n", &array);

	
	ptr_a++;
	printf("�������� ��������� 1: %p. ��������� �� %g\n",ptr_a, *ptr_a);
	ptr_a += 4;
	printf("�������� ��������� 2: %p. ��������� �� %g\n", ptr_a, *ptr_a);
	ptr_a -= 2;
	printf("�������� ��������� 3: %p. ��������� �� %g\n", ptr_a, *ptr_a);
	
	ptr_a = &array[0];
	for (int i = 0;i < 10;i = i + 2)
	{
		printf("array[%d] = %g, ��������� - %p\n", i, *ptr_a, ptr_a);
		ptr_a = ptr_a + 2;
	}
	printf("\n");
	ptr_a = &array[9];
	for (int i = 9;i >=0;i--)
	{
		printf("array[%d] = %g, ��������� - %p\n", i, *ptr_a, ptr_a);
		ptr_a--;
	}



}