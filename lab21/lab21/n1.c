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
	for (int i=0; i<5;i++)
	{

		printf("|%*s||%*d||%*d||%*d|\n",9, corn[i].material,5, corn[i].length,16, corn[i].ceilingWidth,14, corn[i].wallHeight);
	}
}


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

		




	



}