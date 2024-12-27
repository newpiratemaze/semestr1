#include<stdio.h>
#include<locale.h>


void modern()
{
	int num;
	int k = 1;
	FILE* file = fopen("numbers.txt", "r");
	FILE* file2 = fopen("numbersever3.txt", "w");
	while (fscanf_s(file,"%d\n",&num)!=EOF)
	{
		if (k % 3 == 0)
		{
			fprintf(file2, "%d\n", num*2);
			k++;
		}
		else
		{
			//fscanf_s(file, "%d\n", &num);
			printf("num - %d, k - %d\n", num,k);
			fprintf(file2, "%d\n", num);
			k++;
		}

	}

	

	fclose(file2);
	fclose(file);
}

void main()
{
	setlocale(LC_ALL, "RUS");
	modern();



}