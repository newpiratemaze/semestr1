#include<stdio.h>
#include<locale.h>
#include<math.h>
#define pi 3.14




int anglea, angleb, a, b, c, d;
int num=0;
char charr;
char yesorno;
char sp = ' ';
float area(a, b);
void def();
void picture(a, b, c, d);




void main()
{
    setlocale(LC_ALL, "RUS");


   

    do
    {
        
        
        printf("Введите символ: ");
        scanf_s("%c", &charr);
        printf("Введите значение угла 1: ");
        scanf_s("%d", &anglea);

        printf("Введите значение угла 2: ");
        scanf_s("%d", &angleb);

        if (anglea + angleb != 180)
        {
            printf("Сумма противоположных углов не может быть больше или меньше 180 градусов!\n");
            continue;
        }




        printf("Введите длину стороны a: ");
        scanf_s("%d", &a);

        printf("Введите длину стороны b: ");
        scanf_s("%d", &b);

        printf("Введите длину стороны c: ");
        scanf_s("%d", &c);

        printf("Введите длину стороны d: ");
        scanf_s("%d", &d);


        printf("\n");


        if (anglea == angleb)
        {


            for (int i = 1;i <= a;i++)
            {
                for (int j = 1;j <= b;j++)
                {
                    printf("%c", charr);

                }
                printf("\n");
            }
        }


       /* if ((anglea == 45) && (angleb == 135))
        {
            for (int i = 1;i <= a;i++)
            {
                for (int j = b;j >= 1;j--)
                {

                    printf("%c", charr);





                }
                

                b--;
                printf("\n");
                if (i <= c - 1)
                {
                    printf("%*c", i, sp);

                }
                else
                {
                    printf("%*c", i, sp);
                    b--;

                }

            }
        }*/





        printf("Выберите один из 3-х пунктов: \n");
        printf("1. Рассчитать площадь \n");
        printf("2. Вывести определение фигуры \n");
        printf("3. Нарисовать фигуру \n");
        scanf_s("%d", &num);

        if (num == 1)
        {
           
            printf("Площадь данного четырехугольника равна - %f\n", area(a, b));
            num = 0;
        }
        if (num == 2)
        {
            def();
            num = 0;
        }
        if (num == 3)
        {
            picture(anglea,angleb, a, b, c, d);
            num = 0;
        }




        printf("Продолжить? (Да - y, Нет - n) : ");
        yesorno = getchar();
    } while (yesorno = getchar() != 'n');
}




float area(a, b)
{
    float rad = 77 * pi / 180;
    float d1 = a + 2;
    float d2 = (b / 2) + 1;
    float s = d1 * d2 * sin(rad) / 2;
    return s;
}


void def()
{
    printf("Произвольный четырехугольник - это четыре произвольных отрезка, концы которых соединены и образуют на плоскости четырехугольник.\n");
}

void picture(anglea,angleb,a, b, c, d)
{
    if ((anglea == 45) && (angleb == 135))
    {
        for (int i = 1;i <= a;i++)
        {
            for (int j = b;j >= 1;j--)
            {

                printf("%c", charr);





            }


            b--;
            printf("\n");
            if (i <= c - 1)
            {
                printf("%*c", i, sp);

            }
            else
            {
                printf("%*c", i, sp);
                b--;

            }

        }
    }
}