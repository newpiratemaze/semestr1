#include<stdio.h>
#include<locale.h>

void shalnaya_winter()
{
	
	char word[25];
	char temp;
	char spc = "";
	FILE* file = fopen("winter.txt", "r");
	FILE* file2 = fopen("winter2.txt", "w");
	while (fgets(word, 24, file) != NULL)
	{
		temp = word[0];
		word[0] = word[1];
		word[1] = temp;
		for (int i = 0;i < strlen(word)-2;i++)
		{
			if (isspace(word[i]))
			{
				temp = word[i + 1];
				word[i + 1] = word[i + 2];
				word[i + 2] = temp;
			}
		}
		printf("%s", word);
		fprintf(file2, "%s", word);
	}
	fclose(file2);
	fclose(file);
}


void main()
{
	setlocale(LC_ALL, "RUS");
	shalnaya_winter();

}