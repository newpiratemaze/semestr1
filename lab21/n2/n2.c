#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>

struct cornice
{
	char material[20];
	int length;
	int ceilingWidth;
	int wallHeight;


};
typedef struct cornice corn_t;

void print_moto(corn_t corn[])
{
	printf("| Материал||Длина||Ширина у потолка||Высота у стены|\n");
	for (int i = 0; i < 5;i++)
	{

		printf("|%*s||%*d||%*d||%*d|\n", 9, corn[i].material, 5, corn[i].length, 16, corn[i].ceilingWidth, 14, corn[i].wallHeight);
	}
}

void search(corn_t corn[],char key[])
{
	for (int i = 0;i < 5;i++)
	{
		if (strcmp(corn[i].material,key)==0)
		{
			printf("Материал - %s\n", corn[i].material);
			printf("Длина - %d\n", corn[i].length);
			printf("Ширина у портолка - %d\n", corn[i].ceilingWidth);
			printf("Высота у стены - %d\n", corn[i].wallHeight);
		}
			
	}
}
int compare(const void* a, const void* b) {

	const corn_t* corniceA = (const corn_t*)a;

	const corn_t* corniceB = (const corn_t*)b;



	// Расчет площади для каждой записи

	int areaA = corniceA->length * corniceA->ceilingWidth;

	int areaB = corniceB->length * corniceB->ceilingWidth;



	// Сравнение площадей

	if (areaA < areaB) {

		return -1;

	}
	else if (areaA > areaB) {

		return 1;

	}



	return 0;

}

//void qsort(corn_t corn[])
//{
//	int pl[5];
//	int* s=pl;
//
//	for (int i = 0;i < 5;i++)
//	{
//		s[i] = corn[i].ceilingWidth * corn[i].length;
//	}
//	
//	int i = 0;
//	int j = 5;
//	int p = (int)corn[2];
//
//}



void main()
{
	setlocale(LC_ALL, "RUS");

	corn_t corn[5] = {
		{"Wood",10,5,3},
	{"Aluminium",8,4,2},
	{"Plastic", 12,5,4 },
	{"Steel", 6,3,2 },
	{"Metal", 9,6,3}
	};

	
	

	print_moto(corn);

	char key[10];
	printf("Введите материал для поиска:");
	gets(key);
	//printf("%s", key);
	search(corn, key);
	printf("-------------------------------------------------\n");
	qsort(corn, 5, sizeof(corn_t), compare);
	
	for (int i = 0;i < 5;i++)
	{
		
		
			printf("Материал - %s\n", corn[i].material);
			printf("Длина - %d\n", corn[i].length);
			printf("Ширина у портолка - %d\n", corn[i].ceilingWidth);
			printf("Высота у стены - %d\n", corn[i].wallHeight);
			printf("\n");
		

	}






}