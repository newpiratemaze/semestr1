#include<stdio.h>
#include<locale.h>

void main()
{
	setlocale(LC_ALL, "RUS");
	int n = 3, L = 2333, k = 3, m = 5;
	float nn = n, LL = L;
	int res = n / L;



	printf("Дано:\n\t %4d\n\t %1d\n\t ---------\n Ответ:\n\t %3.5f",n,L,nn/LL);
	
}