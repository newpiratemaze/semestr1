#include<stdio.h>
#include<locale.h>
#include<math.h>



void main()
{
	setlocale(LC_ALL, "RUS");

	int n;
	printf("¬ведите n: ");
	scanf_s("%d", &n);
	float s = 0;
		
	for (int i = 1;i <= n;i++)
	{
		float b = 1;
		float a = b/i;
		if (i < n)
		{
			printf("1/%d+", i);
		}
		else printf("1/%d", i);
		s =s+ a;

	}
	printf(" = %f", s);

}