#include<stdio.h>
#include<locale.h>
#include<string.h>

struct motorcycle
{
	char name[20];
	int year;
	int regday;
	int regmon;
	int regyear;
	int power;
	int povred;

};
typedef struct motorcycle motor_t;




void main()
{
	setlocale(LC_ALL, "RUS");

	motor_t moto[3];
	
	


	printf("Введите название мотоцикла 1 - ");
	gets(moto[0].name);
	printf("Введите название мотоцикла 2 - ");
	gets(moto[1].name);
	printf("Введите название мотоцикла 3 - ");
	gets(moto[2].name);


	for (int i = 0;i < 3;i++)
	{
		/*for (int j = 0;j < 19;j++)
		{
			moto[i].name[j] = '\0';
		}*/
		
		
		printf("\n");

		printf("Введите год выпуска мотоцикла %s - ",moto[i].name);
		scanf_s("%d", &moto[i].year);

		printf("Введите день регистрации мотоцикла %s - ", moto[i].name);
		scanf_s("%d", &moto[i].regday);
		printf("Введите месяц (число) регистрации мотоцикла %s - ", moto[i].name);
		scanf_s("%d", &moto[i].regmon);
		printf("Введите год регистрации мотоцикла %s - ", moto[i].name);
		scanf_s("%d", &moto[i].regyear);

		printf("Введите мощность мотоцикла (в лошадиных силах) %s - ", moto[i].name);
		scanf_s("%d", &moto[i].power);


		printf("Введите количество повреждений у мотоцикла %s - ", moto[i].name);
		scanf_s("%d", &moto[i].povred);

	}


	
	
	int maxpow = 0;
	int maxname;
	int midpow = 5000;
	int midname;
	int minpow = 100000000000000;
	int minname;

	for (int i = 0;i < 3;i++)
	{
		if (moto[i].power > maxpow && moto[i].povred!=0)
		{
			maxpow = moto[i].power;
			maxname = i;
		}
		
	}
	for (int i = 0;i < 3;i++)
	{
		if (moto[i].power < minpow && moto[i].povred != 0)
		{
			minpow = moto[i].power;
			minname = i;
			if (minpow == maxpow)
			{
				minpow = 0;
			}
		}
		
	}
	for (int i = 0;i < 3;i++)
	{
		if (moto[i].power != maxpow && moto[i].power != minpow )
		{
			midpow = moto[i].power;
			midname = i;
			if (moto[i].povred == 0)
			{
				midpow = 0;
			}
		}
	}
	printf("\n");

	printf("Максимальную мощность среди поврежденных мотоциклов имеет мотоцикл %s\n", moto[maxname].name);
	if (midpow != 0)
	{
		printf("Среднюю мощность среди поврежденных мотоциклов имеет мотоцикл %s\n", moto[midname].name);
	}
	if (minpow != 0)
	{
		printf("Минимальную мощность среди поврежденных мотоциклов имеет мотоцикл %s\n", moto[minname].name);
	}
	
	
	
	
	/*for (int i = 0;i < 3;i++)
	{
		
		if(maxpow==moto[i].power)
		printf("Максимальную мощность среди поврежденных мотоциклов имеет мотоцикл %s\n", moto[i].name);
		
		if (moto[i].povred != 0 && midpow == moto[i].power)
			printf("Среднюю мощность среди поврежденных мотоциклов имеет мотоцикл %s\n", moto[i].name);
		if (moto[i].povred != 0 && minpow == moto[i].power)
			printf("Минимальную мощность среди поврежденных мотоциклов имеет мотоцикл %s\n", moto[i].name);
	}*/
	/*printf("Название мотоцикла - %s\n", moto.name);
	printf("Год выпуска - %d\n", moto.year);
	printf("Дата регистрации - %d.%d.%d\n", moto.regday,moto.regmon,moto.regyear);
	printf("Мощность (в лошадиных силах) - %d\n", moto.power);
	printf("Количество повреждений - %d\n", moto.povred);*/



}