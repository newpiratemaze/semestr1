#ifndef _LIST_H
#define _LIST_H

#include <stdbool.h>

struct listitem {
    int number;
    char name[80];
    struct listitem* next;
};

typedef struct listitem* List;

void initlist(List* head)/* ������������� ������ ������ ���������� */
{
    *head = NULL;
}
void insertfront(List* head, int val) /* ������� � ������ ����� ����� �� ��������� ���� number=val */
{
    List newNode = (List)malloc(sizeof(struct listitem));
    newNode->number = val;
    newNode->next = *head;
    *head = newNode;
} 
void insertback(List* head, int val) /* ������� � ������ ����� ����� �� ��������� ���� number=val */
{
    List newNode = (List)malloc(sizeof(struct listitem));
    
    newNode->number = val;
    newNode->next = NULL;
    *head = newNode;
}
void insertfronts(List* head, char* str)/* ������� � ������ ����� ����� �� ��������� str � ���� name */
{
    List newNode = (List)malloc(sizeof(struct listitem));
    *newNode->name = str;
    newNode->next = *head;
    *head = newNode;
}
void insertbacks(List* head, char* str) /* ������� � ������ ����� ����� �� ��������� str � ���� name */
{
    List newNode = (List)malloc(sizeof(struct listitem));
    *newNode->name = str;
    newNode->next = NULL;
    *head = newNode;
}
bool isempty(List*); /* ���������, �������� �� ������ ������ */
int length(List* head, List node) /* ����������� ����� ������ */
{
    int count = 0;
    while (node->next != NULL)
    {
        count++;
        node = node->next;
    }
}
void destroyItem(List*, List node); /* �������� ��������� ���� node �� ������ */
List getitem(List, int n); /* ���������� ���� �� ��������� n � ���� number */
List getitem(List, char* str); /* ���������� ���� �� ��������� str � ���� name */

#endif /* _LIST_H */


