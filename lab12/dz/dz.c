#include <stdio.h>
#include<locale.h>





int main() {

	setlocale(LC_ALL, "RUS");
	
	char c;
	short int shit;
	unsigned short int unshit;
	int it;
	unsigned char unch;
	wchar_t wchar;
	long long int loloit;
	size_t sizet;
	float navy;
	double dabl;
	signed int sigit;


	printf("Размер char = %lu б.\n", (unsigned long)(&c + 1) - (unsigned long)&c);
	printf("Размер short int = %lu б.\n", (unsigned long)(&shit + 1) - (unsigned long)&shit);
	printf("Размер unsigned short int = %lu б.\n", (unsigned long)(&unshit + 1) - (unsigned long)&unshit);
	printf("Размер int = %lu б.\n", (unsigned long)(&it + 1) - (unsigned long)&it);
	printf("Размер unsigned char = %lu б.\n", (unsigned long)(&unch + 1) - (unsigned long)&unch);
	printf("Размер wchar_t = %lu б.\n", (unsigned long)(&wchar + 1) - (unsigned long)&wchar);
	printf("Размер long long int = %lu б.\n", (unsigned long)(&loloit + 1) - (unsigned long)&loloit);
	printf("Размер size_t = %lu б.\n", (unsigned long)(&sizet + 1) - (unsigned long)&sizet);
	printf("Размер float = %lu б.\n", (unsigned long)(&navy + 1) - (unsigned long)&navy);
	printf("Размер double = %lu б.\n", (unsigned long)(&dabl + 1) - (unsigned long)&dabl);
	printf("Размер signed int = %lu б.\n", (unsigned long)(&sigit + 1) - (unsigned long)&sigit);




}