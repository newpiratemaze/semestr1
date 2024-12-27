#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<locale.h>



void main()
{



	char name[40];
	char snew[40] = "Hello, ";
	char newname[40];
	
	printf("Enter your name - ");

	gets(name);
	strcpy(newname, "\0");
	printf("newname - %s\n", newname);

	newname[0] = name[0];
	newname[1] = name[1];
	newname[2] = name[2];
	for (int i = 3;i < 39;i++)
	{
		newname[i] = '\0';
	}
	printf("newname - %s\n", newname);
	//newname[3] = ".";
	//newname[4] = ".";
	//newname[5] = ".";

	strcat(snew, newname);

	
	
	
	printf("%s...", snew);




}