#include <stdio.h>
#include<locale.h>




int main() {
    setlocale(LC_ALL, "RUS");
    int score[2][22]; 
    int wins = 0;
    int loses = 0;

    
    printf("������� ���������� ������� ����� � ������ �� %d ������:\n", 22);
    for (int i = 0; i < 22; i++) 
    {
        printf("���� %d: ", i + 1);
        scanf_s("%d", &score[0][i]);
    }

    printf("������� ���������� ����������� ����� � ������ �� %d ������:\n", 22);
    for (int i = 0; i < 22; i++) 
    {
        printf("���� %d: ", i + 1);
        scanf_s("%d", &score[1][i]);
    }

    
    for (int i = 0; i < 22; i++)
    {
        if (score[0][i] > score[1][i])
        {
            wins++; 
        }
        else 
        {
            loses++; 
        }
    }

    
    printf("���������� ���������: %d\n", wins);
    printf("���������� ����������: %d\n", loses);

}
