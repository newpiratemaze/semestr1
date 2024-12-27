#ifndef _LIST_H
#define _LIST_H

#include <stdbool.h>

struct listitem {
    int number;
    char name[80];
    struct listitem* next;
};

typedef struct listitem* List;

void initlist(List* head)/* инициализация списка пустым содержимым */
{
    *head = NULL;
}
void insertfront(List* head, int val) /* вставка в список перед узлом со значением поля number=val */
{
    List newNode = (List)malloc(sizeof(struct listitem));
    newNode->number = val;
    newNode->next = *head;
    *head = newNode;
} 
void insertback(List* head, int val) /* вставка в список перед узлом со значением поля number=val */
{
    List newNode = (List)malloc(sizeof(struct listitem));
    
    newNode->number = val;
    newNode->next = NULL;
    *head = newNode;
}
void insertfronts(List* head, char* str)/* вставка в список перед узлом со значением str в поле name */
{
    List newNode = (List)malloc(sizeof(struct listitem));
    *newNode->name = str;
    newNode->next = *head;
    *head = newNode;
}
void insertbacks(List* head, char* str) /* вставка в список перед узлом со значением str в поле name */
{
    List newNode = (List)malloc(sizeof(struct listitem));
    *newNode->name = str;
    newNode->next = NULL;
    *head = newNode;
}
bool isempty(List*); /* проверяет, является ли список пустым */
int length(List* head, List node) /* определение длины списка */
{
    int count = 0;
    while (node->next != NULL)
    {
        count++;
        node = node->next;
    }
}
void destroyItem(List*, List node); /* удаление заданного узла node из списка */
List getitem(List, int n); /* нахождение узла со значением n в поле number */
List getitem(List, char* str); /* нахождение узла со значением str в поле name */

#endif /* _LIST_H */


