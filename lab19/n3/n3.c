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
		fprintf(file, "��������: %s ; ���� �������: %d ; ���� �����������: %d.%d.%d ; ��������: %d ; �����������: %d\n", moto[i].name, moto[i].year, moto[i].regday, moto[i].regmon, moto[i].regyear, moto[i].power, moto[i].povred);
	}
	fclose(file);
}


void main()
{
	setlocale(LC_ALL, "RUS");

	motor_t moto[3];




	printf("������� �������� ��������� 1 - ");
	gets(moto[0].name);
	printf("������� �������� ��������� 2 - ");
	gets(moto[1].name);
	printf("������� �������� ��������� 3 - ");
	gets(moto[2].name);


	for (int i = 0;i < 3;i++)
	{
		/*for (int j = 0;j < 19;j++)
		{
			moto[i].name[j] = '\0';
		}*/


		printf("\n");

		printf("������� ��� ������� ��������� %s - ", moto[i].name);
		scanf_s("%d", &moto[i].year);

		printf("������� ���� ����������� ��������� %s - ", moto[i].name);
		scanf_s("%d", &moto[i].regday);
		printf("������� ����� (�����) ����������� ��������� %s - ", moto[i].name);
		scanf_s("%d", &moto[i].regmon);
		printf("������� ��� ����������� ��������� %s - ", moto[i].name);
		scanf_s("%d", &moto[i].regyear);

		printf("������� �������� ��������� (� ��������� �����) %s - ", moto[i].name);
		scanf_s("%d", &moto[i].power);


		printf("������� ���������� ����������� � ��������� %s - ", moto[i].name);
		scanf_s("%d", &moto[i].povred);

	}



	savetofile(moto);
	

	
	
	}
	
	

	




	



