#include<stdio.h>
#include<locale.h>





void main()
{
	setlocale(LC_ALL, "RUS");
	printf("Запись в файл...\n");

	FILE* file = fopen("number.txt", "a");
	fprintf(file, "5\n");
	
	printf("Запись успешно сохранена...\n");
	printf("Добавление записи в файл...\n");

	
	fprintf(file, "12,56\n");
	fclose(file);
	printf("Запись успешно добавлена...\n");
}