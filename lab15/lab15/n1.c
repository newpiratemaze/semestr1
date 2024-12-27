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
	printf("Введите количество строк массива (максимум 26) - ");
	scanf_s("%d", &sizestr);
	printf("Введите количество столбцов массива (максимум 26) - ");
	scanf_s("%d", &sizestolb);
	
	if (sizestr > 26)
	{
		printf("Количество строк не может быть больше 26");
		return 1;
	}
	if (sizestr > 26)
	{
		printf("Количество столбцов не может быть больше 26");
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
	printf("Элемент, расположенный в левом нижнем углу массива - %d\n", array[sizestr - 1][0]);

	findminandmax(array, sizestr, sizestolb);
	int value;
	printf("\nВведите значение для поиска на главной диагонали: ");
	scanf_s("%d", &value);
	

	int foundIndex = finddiag(array, sizestr, sizestolb, value);
	if (foundIndex != -1) 
	{
		printf("Значение %c найдено на главной диагонали в позиции [%d][%d].\n", value, foundIndex, foundIndex);
	}
	else
	{
		printf("Значение %c не найдено на главной диагонали.\n", value);
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
	//			array[i][j] = 'Щ';
	//			break;
	//		}
	//		case 27:
	//		{
	//			array[i][j] = 'Ъ';
	//			break;
	//		}
	//		case 28:
	//		{
	//			array[i][j] = 'Ы';
	//			break;
	//		}
	//		case 29:
	//		{
	//			array[i][j] = 'Ь';
	//			break;
	//		}
	//		case 30:
	//		{
	//			array[i][j] = 'Э';
	//			break;
	//		}
	//		case 31:
	//		{
	//			array[i][j] = 'Ю';
	//			break;
	//		}
	//		case 32:
	//		{
	//			array[i][j] = 'Я';
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
	printf("Введите номер строки, в которой необходимо найти минимальный элемент (от 0 до %d) - ", rows);
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
	printf("Минимальный элемент в заданной строке - %d\n", min);
	printf("Введите номер столбца, в котором необходимо найти максимальный элемент (от 0 до %d) - ", cols);
	scanf_s("%d", &stolb);
	for (int i = 0;i < rows;i++)
	{
		if (array[i][stolb] > max)
		{
			max = array[i][stolb];
		}
	}
	printf("\nМаксимальный элемент в заданном столбце - %d", max);



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








