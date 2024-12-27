#include<stdio.h>
#include<locale.h>
#include<math.h>



void main()
{
	setlocale(LC_ALL, "RUS");
	char a;
	do
	{
		long int num;
		printf("Введите число: ");
		scanf_s("%ld", &num);

		long int numm = num;
		long int nummm = num;
		long int num1 = num;
		long int num2 = num;



		int k = 0;
		int i = 1;
		int j = 1;
		int count2 = 0;

		int c3 = 0, cl = 0, cch = 0, cm5 = 0, cnch = 0, csmoreorequal7 = 0, cproizvedkrome0 = 1;
		int cproizvsecondandprelast = 1, csumchkrl = 0, cproizvchandnchrazr = 0;
		int s1 = 0, s2 = 0, count = 0;
		int ss1 = 0, ss2 = 0;
		float l = (num % 10);
		float prel = (num / 10) % 10;
		//printf("%f", l);


		for (k = 0;num1 != 0;k++)
		{
			num1 /= 10;

		}
		int a10 = pow(10, k / 2);
		long int num3 = num / a10;




		do
		{






			//1
			if (num % 10 == 3)
			{
				c3++;

			}
			//if ((num / 100 == 0) && (num / 10 == 3))
			//{
			//	c3++;
			//}

			//2
			if (num % 10 == l)
			{
				cl++;
			}
			//if ((num / 100 == 0) && (num / 10 == l))
			//{
			//	cl++;
			//}

			//3
			if ((num % 10) % 2 == 0)
			{
				cch++;
			}
			//if ((num / 100 == 0) && ((num /10)%2==0))
			//{
			//	cch++;
			//}

			//4
			if (num % 10 > 5)
			{
				cm5++;
			}
			//if ((num / 100 == 0) && ((num / 10)>5))
			//{
			//	cm5++;
			//}

			//5
			if ((num % 10) % 2 != 0)
			{
				cnch += num % 10;
			}
			//if ((num / 100 == 0) && ((num / 10)%2!=0))
			//{
			//	cnch+=num/10;
			//}

			//6
			if (num % 10 >= 7)
			{
				csmoreorequal7 += num % 10;
			}
			//if ((num / 100 == 0) && ((num / 10)>=7))
			//{
			//	csmoreorequal7 += num / 10;
			//}

			//7
			if (num % 10 != 0)
			{
				cproizvedkrome0 *= num % 10;
			}

			//if (((num / 100==0)) && ((num / 10) !=0))
			//{
			//	cproizvedkrome0 *= num / 10;
			//}

			//8
			if (num / 100 == 0)
			{
				cproizvsecondandprelast *= prel;
				//cproizvsecondandprelast *= num%10;
			}

			//9
			if ((num % 10) % 2 == 0)
			{
				csumchkrl += num % 10;
			}
			//if ((num / 100 == 0) && ((num / 10) % 2 == 0))
			//{
			//	csumchkrl += num / 10;
			//}

			//10
			if (num % 10 == (num / 10) % 10)
			{
				//printf("В числе %d одинаковые цифры, расположенные рядом %d%d\n", numm, num % 10, num % 10);
				count++;
			}

			//11
			for (i;i <= k / 2;i++)
			{

				s2 = s2 + num2 % 10;
				num2 /= 10;
				//printf("k - %d ", k);
				//printf("i - %d ", i);
				//printf(" cccc - %d\n", s2);
			}
			for (j;j <= k / 2;j++)
			{
				s1 = s1 + num3 % 10;
				num3 /= 10;

				//printf("k - %d ", k);
				//printf("i - %d ", j);
				//printf(" cccc - %d\n", s1);
			}
			if (s1 == s2)
			{
				//printf("В числе %d сумма первой половины цифр равна сумме второй половины цифр\n", numm);
				count2++;
			}




			//12
			while (nummm != 0)
			{
				ss1 = ss1 + nummm % 10;
				nummm /= 10;
				ss2 = ss2 + nummm % 10;
				nummm /= 10;
				//printf("%d\n", ss1);
				//printf("%d\n", ss2);
			}









			//k++;

			num /= 10;


		} while (num != 0);
		csumchkrl -= l;

		int proiz = ss1 * ss2;


		printf("В числе %d количество цифр '3' равно %d\n", numm, c3);
		printf("В числе %d последнее число повторяется %d раз(-a)\n", numm, cl);
		printf("В числе %d количество четных чисел равно %d\n", numm, cch);
		printf("В числе %d количество цифр больших 5 равно %d\n", numm, cm5);
		printf("В числе %d сумма нечетных чисел равна %d\n", numm, cnch);
		printf("В числе %d сумма чисел равных и больших 7 равна %d\n", numm, csmoreorequal7);
		printf("В числе %d произведение всех цифр кроме 0 равно %d\n", numm, cproizvedkrome0);
		printf("В числе %d произведение предпоследней и второй цифр равно %d\n", numm, cproizvsecondandprelast);
		printf("В числе %d сумма четных чисел кроме последней равна %d\n", numm, csumchkrl);
		if (count == 0)
		{
			printf("В числе %d нет одинаковых цифр, расположенных рядом\n", numm);
		} else printf("В числе %d одинаковые цифры, расположенные рядом %d%d\n", numm, num % 10, num % 10);


		printf("В числе %d произведение суммы цифр четных и нечетных разрядов равна %d\n", numm, proiz);
		if (count2 == 0)
		{
			printf("В числе %d сумма первой половины цифр не равна сумме второй половины цифр\n", numm);
		} else printf("В числе %d сумма первой половины цифр равна сумме второй половины цифр\n", numm);

		printf("%d\n", k);


		
		

		

		// Решение домашней задачи

		printf("Продолжить ? (Да - y, нет - n) - ");

		//if ((a = getchar()) == 'n') break;
		a = getchar();

	} while ((a = getchar()) != 'n');






}