#include<stdio.h>
#include<locale.h>


#include<math.h>
#define _USE_MATH_DEFINES

void main()
{
	setlocale(LC_ALL, "RUS");

	float x;
	float k = 1.2;

	printf("¬ведите значение x:");
	scanf_s("%f", &x);
	//printf("%f\n", pow(k, 5));

	float a = exp(k * x);

	float b = pow(log(x), 2) + pow(k, 5);

	float c = pow(a, 2) + pow(b, 2);
	float aa = 1;
	float bb = 3;

	float del = aa / bb;
	//printf("%f\n",del);
	float y = pow(c, del);

	printf("x = %f\n", x);
	printf("a = %f\n", a);
	printf("b = %f\n", b);
	printf("y = %.2f\n", y);

	int cela = (int)a / 1;
	int celb = (int)b / 1;
	int celc = (int)y / 1;

	int if1 = ((cela % 2 == 0) ^ (celb % 2 == 0));
	int if2 = (cela % 3 == 0) * (celb % 3 == 0) * (celc % 3 == 0);

	printf("а) %d\n", (int)if1);
	printf("б) %d", (int)if2);


}


/*#include<stdio.h>
#include<locale.h>
#include<math.h>
#define _USE_MATH_DEFINES
#define M_PI 3.14159265358979323846


void main() {

	setlocale(LC_ALL, "RUS");


	double x, y, z;

	printf("¬ведите значение x: ");
	scanf_s("%f", &x);

	printf("¬ведите значение y: ");
	scanf_s("%f", &y);

	printf("¬ведите значение z: ");
	scanf_s("%f", &z);

	double w = ((fabs(pow(cos(x*M_PI/180) - cos(y * M_PI / 180), (1 + 2 * pow(sin(y * M_PI / 180), 2))))) * (1 + z + (pow(z, 2) / 2) + (pow(z, 3) / 3) + (pow(z, 4) / 4)));
	printf("%f", w);






}*/