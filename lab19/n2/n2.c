#include<stdio.h>
#include<locale.h>

float func(float x)
{
	return x * x;
}

savetonewfile(float start, float end, float step)
{
	FILE* file = fopen("temp.txt", "w");
	fprintf(file,"x       f(x)\n");
	for (float x = start;x <= end;x += step)
	{
		fprintf(file, "%.3f  %.3f\n", x, func(x));
	}
	fclose(file);

}


savetoexistfile(float start, float end, float step)
{
	FILE* file = fopen("temp.txt", "a");

	for (float x = start;x <= end;x += step)
	{
		fprintf(file, "%.3f  %.3f\n", x, func(x));
	}
	fclose(file);

}


void main()
{
	setlocale(LC_ALL, "RUS");


	float start, end, step;
	int choice;


	printf("������� ������ ���������: ");
	scanf_s("%f", &start);
	printf("������� ����� ���������: ");
	scanf_s("%f", &end);
	printf("������� ���: ");
	scanf_s("%f", &step);


	printf("�������� ��������:\n1) ������ � ����� ����\n2) ���������� ������������\n");
	scanf_s("%d", &choice);
	switch (choice)
	{
	case 1:
	{
		savetonewfile(start, end, step);
		break;
	}
	case 2:
	{
		savetoexistfile(start, end, step);
		break;
	}
	}


}