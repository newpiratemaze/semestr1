#include <stdio.h>
#include <math.h>
#include <locale.h>
#define pi 3.141592653589793238462643383279

double x, eps, x2;
int N;
float x3;


double fact(int n);
double sin2(double x, int N);
double sin_eps(double x, double eps);
float arcctg(float x3, int N);



void main() {
    setlocale(LC_ALL, "rus");
   


    printf("Введите x: ");
    scanf_s("%lf", &x);
    printf("Введите n: ");
    scanf_s("%d", &N);
    printf("Введите точность eps: ");
    scanf_s("%lf", &eps);
    float x4 = x;
    x3 = x;
    float result1 = sin(x);
    float result2 = sin2(x, N);
    float result3 = sin_eps(x, eps);
    

    printf("Встроенная функция синуса = %.4f\n",result1);
    printf("Рукописная функция синуса = %.4f\n",result2);
    printf("Ряд Маклорена для синуса = %.4f\n",result3);

    printf("|    N     |        sin_N       |  отколнение |\n");

    float res2 = 0;
    int se = 0;

    for (int k = 0; k < N; k++) {
        int posl = 2 * k + 1;
        float term = pow(-1, k) * pow(x, posl) / fact(posl);
        res2 += term;
        se++;
        printf("|%*d|%*f|%*f|\n",10, se,20, res2,13, result2 - res2);
    }

    printf("Арккотангенс = %f",arcctg(x3, N));

   

}








double fact(int n) {
    double result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

double sin2(double x, int N) {
    double result = 0.0;
    for (int k = 0; k < N; k++) {
        int posl = 2 * k + 1;
        double term = pow(-1, k) * pow(x, posl) / fact(posl);
        result += term;

    }
    return result;
}

double sin_eps(double x, double eps) {
    x = fmod(x, 2 * pi);
    if (x > pi) {
        x -= 2 * pi;
    }
    else if (x < -pi) {
        x += 2 * pi;
    }

    double term = x;
    double sum = term;
    int n = 1;
    while (fabs(term) > eps) {
        n += 2;
        term *= -x * x / (n * (n - 1));
        sum += term;
    }

    return sum;
}


float arcctg(float x3, int n)
{
	float np1 = N + 1;
	float n2p1 = 2 * N + 1;
	float arcctgx = 0;
	float mnp1 = pow((-1), np1);
	float xn2p1 = pow(x3, n2p1);
	float f = mnp1 * xn2p1 / (n2p1);
	for (int l = 1;l <= N;l++)
	{
		arcctgx += f;
		//printf("%f\n", arcctgx);
	
	}
	return arcctgx;
}


