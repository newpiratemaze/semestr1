#include<stdio.h>
#include<locale.h>
#include<math.h>

int printres(float (*pfunc)(float),float x)
{
	printf("         x | f(x)\n");
	float res = pfunc(x);
	printf("%*.2f | %f\n",10, x, res);
}

float yx(float x)
{
	float x3 = pow(x, 3);
	float corex3 = sqrt(x3);
	float lncorex3 = log(corex3);
	if(x>3)
	{
		return lncorex3;
	}
}

float vx(float x)
{
	float x2 = x * x;
	float tgx2m1 = tan(x2 - 1);
	float coretgx2m1 = sqrt(tgx2m1);

	float m2x = 0 - 2 * x;

	float cosx = cos(x);
	float ecosx = exp(cosx);

	if (x > 1)
	{
		return coretgx2m1;
	}
	if (x >= 0 && x <= 1)
	{
		return m2x;
	}
	if (x < 0)
	{
		return ecosx;
	}


}

float sx(float x)
{
	float xm1 = x - 1;
	float xp1 = x + 1;
	float xm1dxp1 = xm1 / xp1;
	float xm1dxp13 = pow(xm1dxp1, 3);
	float xm1dxp15 = pow(xm1dxp1, 5);
	float xm1dxp17 = pow(xm1dxp1, 7);

	float oned3 = 1 / 3;
	float oned5 = 1 / 5;
	float oned7 = 1 / 7;

	float res = xm1dxp1 + oned3 * xm1dxp13 + oned5 * xm1dxp15 + oned7 * xm1dxp17;
	return res;
}






void main()
{
	setlocale(LC_ALL, "RUS");
	float x;
	printf("x - ");
	scanf_s("%f", &x);

	printres(vx, x);
}