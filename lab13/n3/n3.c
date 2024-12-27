#include<stdio.h>
#include<string.h>
//#include<locale.h>
#include<ctype.h>




void main()
{
	//setlocale(LC_ALL, "RUSSIAN");

	char string[100];

	gets(string);

	int ks = 0;
	int ke = 99;
	int kp = 0;

	do
	{
		ks++;
	} while (string[ks] != ',');

	do
	{
		ke--;
	} while (string[ke] != ',');

	for (int i = ks;i < ke;i++)
	{
		if (string[i] == ' ')
		{
			kp++;
		}

	}



	printf("ks - %d\n", ks);
	printf("ke - %d\n", ke);
	printf("kp - %d\n", kp);

}