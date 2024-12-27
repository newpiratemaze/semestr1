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

void savetofile(motor_t moto[])
{
	FILE* file = fopen("motos.txt", "w");
	for (int i = 0;i < 3;i++)
	{
		fprintf(file, "Название: %s ; Дата выпуска: %d ; Дата регистрации: %d.%d.%d ; Мощность: %d ; Повреждения: %d\n", moto[i].name, moto[i].year, moto[i].regday, moto[i].regmon, moto[i].regyear, moto[i].power, moto[i].povred);
	}
	fclose(file);
}


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

		printf("Введите год выпуска мотоцикла %s - ", moto[i].name);
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



	savetofile(moto);
	

	
	
	}
	
	

	




	



