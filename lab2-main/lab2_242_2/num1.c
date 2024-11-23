#include <stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL, "RUS");

	printf("123\n"); //t1
	printf(" %d\n %d\n %d\n", 1, 2, 3); //t2
	printf(" %d\n\t %d\n\t\t %d\n", 1, 2, 3); //t3
	printf("%2d\n %5d\n %9d\n %11d\n", 1, 2, 3, 4);       //t4
	printf("%10.3f\n ", 12.234657); //t5
	printf("%10.5f\n ", 12.234657); //t6
	printf("Остаток от деления %d на %d равен %d\n ", 5, 2, 5 % 2); //t7
	printf("Результат деления %d на %d равен %d\n ", 7, 5, 7 / 5); //t8/1
	printf("Умножение %d на %d равно %d\n ", 2000, 4, 2000 * 4); //t8/2
	printf("%g разделить %e равно %f\n ", 5., 2., 5. / 2); //t9
	printf("%d разделить %d равно %d\n ", 5, 2, 5 / 2); //t10


}