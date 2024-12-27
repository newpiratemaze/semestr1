#include<stdio.h>
#include<locale.h>

midsum(float sum, float k)
{
	int num;
	int ssum = 0;
	int kk = 0;
	FILE* file = fopen("temp.txt", "r");
	if (file == NULL)
	{
		printf("Файл не найден...");
		return;
	}
	while (fscanf_s(file,"%d\n",&num)!=EOF)
	{
		//fscanf_s(file,"%d\n",&num);
		ssum += num;
		kk++;
		printf("sum = %d ; k = %d ; num = %d\n", ssum, kk, num);
	}
	fclose(file);

	printf("Среднее арифметическое целых чисел = %f", (float)ssum / (float)kk);
}


void main()
{
	setlocale(LC_ALL, "RUS");

	float sum = 0;
	float k = 0;

	printf("-------------------------------\n");
	midsum(sum, k);





}