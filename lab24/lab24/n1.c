#include <stdio.h>
#include<locale.h>
#include <string.h>

#define NMAX 100
#define TYPE char
#define FTYPE "%3c "

typedef struct Stack 
{
    int top;
    TYPE data[NMAX];
} stack;

int isempty(stack* s)
{
    if (s->top == 0)
        return 1;
    else return 0;
}

int isfull(stack* s) 
{
    if (s->top == NMAX - 1)
        return 1;
    else return 0;
}

int push(stack* s, TYPE a) 
{
    if (!isfull(s)) 
    {
        s->data[++(s->top)] = a;
        return 1; 
    }
    return 0; 
}

TYPE pop(stack* s)
{
    if (!isempty(s)) 
    {
        return s->data[(s->top)--];
    }
    return '\0'; 
}

TYPE top(stack* s) 
{
    if (!isempty(s)) 
    {
        return s->data[s->top];
    }
    return '\0'; 
}

void display(stack* s) 
{
    int i = s->top;
    while (i > 0) 
    {
        printf(FTYPE, s->data[i--]);
    }
}

int main() 
{
    setlocale(LC_ALL, "RUS");
    stack s = { 0 };
    char input[NMAX];

    printf("������� ������: ");
    fgets(input, NMAX, stdin);

    for (int i = 0; i < strlen(input); i++) 
    {
        push(&s, input[i]);
    }

    printf("���������� �����: ");
    display(&s);

    return 0;
}
