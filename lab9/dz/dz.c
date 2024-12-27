#include<stdio.h>
#include<locale.h>
#include<math.h>



void main()
{
	setlocale(LC_ALL, "RUS");


    char yesorno;
    char sp = ' ';

    do
    {
        int anglea, angleb, a=5, b=7, c=3, d=4;
        char charr;
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


        if ((anglea == 45) && (angleb == 135))
        {
            for (int i = 1;i <= a;i++)
            {
                for (int j = b;j >= 1;j--)
                {
                    
                    printf("%c", charr);
                    
                   



                }
               /* if (i > c)
                {
                    b--;

                }*/
               
                b--;
                printf("\n");
                if (i <= c-1)
                {
                    printf("%*c",i, sp);
                    
                }
                else
                {
                    printf("%*c", i, sp);
                    b--;
                    
                }
               
            }
        }




        




       
        
        printf("Продолжить? (Да - y, Нет - n) : ");
        yesorno = getchar();
    } while ( yesorno = getchar() != 'n');
}