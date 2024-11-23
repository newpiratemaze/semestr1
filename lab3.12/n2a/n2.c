#include<stdio.h>
#include<locale.h>
#define	nm 1.852
#define sm 1.609
#define rm 1.475
#define srm 7.468
#define gm 7412.6

void main()
{
	setlocale(LC_ALL, "RUS");
	int dym;

	float result1, result2, result3, result4, result5;

	puts("¬ведите число");
	scanf("%d", &dym);
	result1 = nm * dym;
	result2 = sm * dym;
	result3 = rm * dym;
	result4 = srm * dym;
	result5 = gm * dym;

	printf("%d морских миль Ц это % .2f км\n", dym, result1);
	printf("%d сухопутных миль Ц это % .2f км\n", dym, result2);
	printf("%d римских миль Ц это % .2f км\n", dym, result3);
	printf("%d старорусских миль Ц это % .2f км\n", dym, result4);
	printf("%d географических миль Ц это % .2f км\n", dym, result5);

}