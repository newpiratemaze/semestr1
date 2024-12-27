#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
//#include<locale.h>



void main()
{
	//setlocale(LC_ALL, "RUSSIAN");


	char name[40];
	char snew[40] = "Hello, ";
	//char snew2[40];

	int count;
	


	printf("Enter your name - ");
	

	gets(name);
	printf("%s\n", name);

	//printf("%s\n", name);
	//int len3 = strlen(name);
	//name[len3 + 1] = '\0';
	strcat(snew,name);
	
	//strcat(snew, vosk);
	
	for (int i = 0;i < 40;i++)
	{
		snew[i] = toupper(snew[i]);
	}
	printf("%s\n", snew);


	int len = strlen(snew);
	printf("len - %d\n", len);
	for (int i = len;i < 39;i++)
	{
		snew[i] = '\0';
	}
	for (int i=len;i<40;i++)
	{
		
		snew[i] = '!';
		
	}
	int len2 = strlen(snew);
	printf("len2 - %d\n", len2);


	
	for (int i = 0;i < 40;i++)
	{
		printf("%c", snew[i]);
	}
	/*printf("\n");
	printf("%s", snew);
	*/
	
	

}