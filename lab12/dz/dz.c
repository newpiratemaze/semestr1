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


	printf("������ char = %lu �.\n", (unsigned long)(&c + 1) - (unsigned long)&c);
	printf("������ short int = %lu �.\n", (unsigned long)(&shit + 1) - (unsigned long)&shit);
	printf("������ unsigned short int = %lu �.\n", (unsigned long)(&unshit + 1) - (unsigned long)&unshit);
	printf("������ int = %lu �.\n", (unsigned long)(&it + 1) - (unsigned long)&it);
	printf("������ unsigned char = %lu �.\n", (unsigned long)(&unch + 1) - (unsigned long)&unch);
	printf("������ wchar_t = %lu �.\n", (unsigned long)(&wchar + 1) - (unsigned long)&wchar);
	printf("������ long long int = %lu �.\n", (unsigned long)(&loloit + 1) - (unsigned long)&loloit);
	printf("������ size_t = %lu �.\n", (unsigned long)(&sizet + 1) - (unsigned long)&sizet);
	printf("������ float = %lu �.\n", (unsigned long)(&navy + 1) - (unsigned long)&navy);
	printf("������ double = %lu �.\n", (unsigned long)(&dabl + 1) - (unsigned long)&dabl);
	printf("������ signed int = %lu �.\n", (unsigned long)(&sigit + 1) - (unsigned long)&sigit);




}