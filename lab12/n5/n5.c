#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void printb(void* ptr, size_t size) {
	unsigned char* bptr = (unsigned char*)ptr;
	for (size_t i = 0; i < size; i++) {
		printf("%.2x ", bptr[i]);
	}
	printf("\n");
}

void main() {
	setlocale(LC_ALL, "rus");
	
	int x = 0x12345678;
	int* prt;
	unsigned char* a1, * a2, * a3, * a4;
	unsigned char* a;

	prt = &x;
	a = (unsigned char*)prt;

	a1 = a + 3;
	a2 = a + 2;
	a3 = a + 1;
	a4 = a;
	printf("%.2x\n%.2x\n%.2x\n%.2x\n", *a1, *a2, *a3, *a4);

	int z = 123;
	float f = 12345;
	double d = 12345;

	printf("���������� ������������� int:\n");
	printb(&z, sizeof(z));

	printf("���������� ������������� float:\n");
	printb(&f, sizeof(f));

	printf("���������� ������������� double:\n");
	printb(&d, sizeof(d));

}






