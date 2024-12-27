#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<locale.h>

#define K 10 // ���������� ������
#define N 100 // ������ ������� ��������� �����
#define R 50 // ������������ ���������� �������� ��� ������ �����������

void generateRandomNumbers(int array[], int n, int min, int max) {
    for (int i = 0; i < n; i++) {
        array[i] = (rand() % (max - min + 1)) + min;
    }
}

void printHistogram(int counter[], int k, int r) {
    int nmax = 0;
    for (int i = 1; i <= k; i++) {
        if (counter[i] > nmax) {
            nmax = counter[i];
        }
    }

    for (int i = 1; i <= K; i++) {
        int x = (counter[i] * R) / (nmax ? nmax : 1);
        for (int j = 0; j < x; j++) {
            printf("*");
        }
        printf(" %d\n", counter[i]);
    }
}

void sortByPosition(int array[], int n, int type) 
{
   
    
    for (int i = type; i < n; i += 2) {
        for (int j = i + 2; j < n; j += 2) {
            if (array[i] < array[j]) {
                int temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

int main() 
{
    setlocale(LC_ALL, "RUS");
    int counter[K + 1] = { 0 };
    int array[N];
    int min, max, type;


    printf("������� min: ");
    scanf_s("%d", &min);
    printf("������� max: ");
    scanf_s("%d", &max);

    if (min < 1 || max > K || min > max) {
        printf("������: ������������ ��������.\n");
        return 1;
    }

    generateRandomNumbers(array, N, min, max);

    for (int i = 0; i < N; i++) {
        counter[array[i]]++;
    }

    printf("�����������:\n");
    printHistogram(counter, K, R);

    printf("������� ��� ���������� (0 - ������, 1 - ��������): ");
    scanf_s("%d", &type);

    printf("�������� ������:\n");

    for (int i = 0;i < N;i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
    sortByPosition(array, N, type);

   

    printf("��������������� ������:\n");
    for (int i = 0; i < N; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
