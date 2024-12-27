#include<stdio.h>
#include<locale.h>
#include<string.h>

//char str;

int fill(int array[][26], int rows, int cols);
int put(int array[][26], int rows, int cols);
int findminandmax(int array[][26], int rows, int cols);
int finddiag(int array[][26], int rows, int cols, int value);


void main()
{
	setlocale(LC_ALL, "RUS");
	int array[26][26];
	int array1[26][26];
	int sizestolb;
	int sizestr;
	printf("������� ���������� ����� ������� (�������� 26) - ");
	scanf_s("%d", &sizestr);
	printf("������� ���������� �������� ������� (�������� 26) - ");
	scanf_s("%d", &sizestolb);
	
	if (sizestr > 26)
	{
		printf("���������� ����� �� ����� ���� ������ 26");
		return 1;
	}
	if (sizestr > 26)
	{
		printf("���������� �������� �� ����� ���� ������ 26");
		return 1;
	}
	printf("  n|");
	for (int i = 0;i < sizestolb;i++)
	{
		printf("%*d|", 2, i);
	}
	printf("\n");

	fill(array, sizestr, sizestolb);
	
	put(array, sizestr, sizestolb);
	/*for (int i = 0;i < sizestr;i++)
	{
		array[i][i] = i;
	}*/


	printf("\n");
	printf("�������, ������������� � ����� ������ ���� ������� - %d\n", array[sizestr - 1][0]);

	findminandmax(array, sizestr, sizestolb);
	int value;
	printf("\n������� �������� ��� ������ �� ������� ���������: ");
	scanf_s("%d", &value);
	

	int foundIndex = finddiag(array, sizestr, sizestolb, value);
	if (foundIndex != -1) 
	{
		printf("�������� %c ������� �� ������� ��������� � ������� [%d][%d].\n", value, foundIndex, foundIndex);
	}
	else
	{
		printf("�������� %c �� ������� �� ������� ���������.\n", value);
	}



}

int fill(int array[][26], int rows, int cols)
{
	
	for (int i = 0;i < rows;i++)
	{
		for (int j = 0;j < cols;j++)
		{
			array[i][j] = i+j;
		}
	}
	
	
	
	//for (int i = 0;i < rows;i++)
	//{
	//	for (int j = 0;j < cols;j++)
	//	{
	//		switch (j)
	//		{
	//		case 0:
	//		{
	//			array[i][j] = 'A';
	//			break;
	//		}
	//		case 1:
	//		{
	//			array[i][j] = 'B';
	//			break;
	//		}
	//		case 2:
	//		{
	//			array[i][j] = 'C';
	//			break;
	//		}
	//		case 3:
	//		{
	//			array[i][j] = 'D';
	//			break;
	//		}
	//		case 4:
	//		{
	//			array[i][j] = 'E';
	//			break;
	//		}
	//		case 5:
	//		{
	//			array[i][j] = 'F';
	//			break;
	//		}
	//		case 6:
	//		{
	//			array[i][j] = 'G';
	//			break;
	//		}
	//		case 7:
	//		{
	//			array[i][j] = 'H';
	//			break;
	//		}
	//		case 8:
	//		{
	//			array[i][j] = 'I';
	//			break;
	//		}
	//		case 9:
	//		{
	//			array[i][j] = 'J';
	//			break;
	//		}
	//		case 10:
	//		{
	//			array[i][j] = 'K';
	//			break;
	//		}
	//		case 11:
	//		{
	//			array[i][j] = 'L';
	//			break;
	//		}
	//		case 12:
	//		{
	//			array[i][j] = 'M';
	//			break;
	//		}
	//		case 13:
	//		{
	//			array[i][j] = 'N';
	//			break;
	//		}
	//		case 14:
	//		{
	//			array[i][j] = 'O';
	//			break;
	//		}
	//		case 15:
	//		{
	//			array[i][j] = 'P';
	//			break;
	//		}
	//		case 16:
	//		{
	//			array[i][j] = 'Q';
	//			break;
	//		}
	//		case 17:
	//		{
	//			array[i][j] = 'R';
	//			break;
	//		}
	//		case 18:
	//		{
	//			array[i][j] = 'S';
	//			break;
	//		}
	//		case 19:
	//		{
	//			array[i][j] = 'T';
	//			break;
	//		}
	//		case 20:
	//		{
	//			array[i][j] = 'U';
	//			break;
	//		}
	//		case 21:
	//		{
	//			array[i][j] = 'V';
	//			break;
	//		}
	//		case 22:
	//		{
	//			array[i][j] = 'W';
	//			break;
	//		}
	//		case 23:
	//		{
	//			array[i][j] = 'X';
	//			break;
	//		}
	//		case 24:
	//		{
	//			array[i][j] = 'Y';
	//			break;
	//		}
	//		case 25:
	//		{
	//			array[i][j] = 'Z';
	//			break;
	//		}
	//		/*case 26:
	//		{
	//			array[i][j] = '�';
	//			break;
	//		}
	//		case 27:
	//		{
	//			array[i][j] = '�';
	//			break;
	//		}
	//		case 28:
	//		{
	//			array[i][j] = '�';
	//			break;
	//		}
	//		case 29:
	//		{
	//			array[i][j] = '�';
	//			break;
	//		}
	//		case 30:
	//		{
	//			array[i][j] = '�';
	//			break;
	//		}
	//		case 31:
	//		{
	//			array[i][j] = '�';
	//			break;
	//		}
	//		case 32:
	//		{
	//			array[i][j] = '�';
	//			break;
	//		}*/

	//		}
	//	}
	//}
	
}
int put(int array[][26], int rows, int cols)
{
	for (int i = 0;i < rows;i++)
	{
		printf("%*d|", 3, i);
		for (int j = 0;j < cols;j++)
		{
			printf("%*d|", 2, array[i][j]);

		}
		printf("\n");
	}
}
int findminandmax(int array[][26], int rows, int cols)
{
	int min = 0;
	int max =26;
	int str;
	int stolb;
	printf("������� ����� ������, � ������� ���������� ����� ����������� ������� (�� 0 �� %d) - ", rows);
	scanf_s("%d", &str);
	for (int i = 0;i < cols;i++)
	{
		if (array[str][i] <= min)
		{
			min = array[str][i];
			//printf("%c\n", min);
			//printf("min - %d\n", min);
		}
	}
	printf("����������� ������� � �������� ������ - %d\n", min);
	printf("������� ����� �������, � ������� ���������� ����� ������������ ������� (�� 0 �� %d) - ", cols);
	scanf_s("%d", &stolb);
	for (int i = 0;i < rows;i++)
	{
		if (array[i][stolb] > max)
		{
			max = array[i][stolb];
		}
	}
	printf("\n������������ ������� � �������� ������� - %d", max);



}
int finddiag(int array[][26], int rows, int cols, int elem)
{

int limit = rows < cols ? rows : cols;
for (int i = 0; i < limit; i++) {
	if (array[i][i] == elem) 
	{
		return i;
	}
}
return -1;
}








