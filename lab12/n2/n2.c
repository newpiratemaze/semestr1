#include<stdio.h>
#include<locale.h>




int main()
{

	setlocale(LC_ALL, "rus");

	float PI = 3.14159, *p1, *p2;

	p1 = p2 = &PI;

	printf("�� ������ p1=%x �������� *p1=%g\n", p1, *p1);

	printf("�� ������ p2=%p �������� *p2=%g\n", p2, *p2);

}