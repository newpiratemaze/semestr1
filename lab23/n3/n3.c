#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>
#include "list3.h"

void printList(Node* head) {
    while (head) {
        printf("��������: %s, �����: %d, ������ � �������: %d, ������ � �����: %d\n",
            head->data.material, head->data.length, head->data.ceilingWidth, head->data.wallHeight);
        head = head->next;
    }
}





int main() {
    setlocale(LC_ALL, "RUS");
    
    Node* list = NULL;
    system("chcp 1251");
    Cornice array[] = {
        {"��������", 10, 5, 3},
        {"Aluminium", 8, 4, 2},
        {"Plastic", 12, 5, 4},
        {"Steel", 6, 3, 2},
        {"Metal", 9, 6, 3}
    };
    int size = sizeof(array) / sizeof(array[0]);

    for (int i = 0; i < size; i++) {
        addNode(&list, array[i]);
    }
    printf("�������� ������:\n");
    printList(list);
    merge(&list);
   
    printf("��������������� ������:\n");
    printList(list);
    
    char searchMaterial[20];
    printf("������� �������� ��� ������: ");
    scanf("%s", searchMaterial);

    Node* found = searchByMaterial(list, searchMaterial);
    if (found) {
        printf("������ ��������: %s, �����: %d, ������ � �������: %d, ������ � �����: %d\n",
            found->data.material, found->data.length, found->data.ceilingWidth, found->data.wallHeight);
    }
    else {
        printf("�������� %s �� ������.\n", searchMaterial);
    }

    return 0;
}















//#include<stdio.h>
//#include<locale.h>
//#include<string.h>
//#include<stdlib.h>
//
//
//typedef struct {
//    char material[20];
//    int length;
//    int ceilingWidth;
//    int wallHeight;
//} Cornice;
//
//typedef struct Node {
//    Cornice data;
//    struct Node* next;
//} Node;
//
//Node* arrayToList(Cornice* array, int size) {
//    Node* head = NULL;
//    Node* tail = NULL;
//
//    for (int i = 0; i < size; i++) {
//        Node* newNode = (Node*)malloc(sizeof(Node));
//        newNode->data = array[i];
//        newNode->next = NULL;
//
//        if (!head) {
//            head = newNode;
//            tail = newNode;
//        }
//        else {
//            tail->next = newNode;
//            tail = newNode;
//        }
//    }
//
//    return head;
//}
//
//void merge(Node** headRef) {
//    Node* head = *headRef;
//    if (!head || !head->next) return;
//
//    Node* mid = head;
//    Node* fast = head->next;
//
//    while (fast && fast->next) {
//        mid = mid->next;
//        fast = fast->next->next;
//    }
//
//    Node* left = head;
//    Node* right = mid->next;
//    mid->next = NULL;
//
//    merge(&left);
//    merge(&right);
//
//    Node* merged = NULL;
//    Node** tail = &merged;
//
//    while (left && right) {
//        if (left->data.length <= right->data.length) {
//            *tail = left;
//            left = left->next;
//        }
//        else {
//            *tail = right;
//            right = right->next;
//        }
//        tail = &(*tail)->next;
//    }
//
//    *tail = left ? left : right;
//    *headRef = merged;
//}
//
//void printList(Node* head) {
//    while (head) {
//        printf("Material: %s, Length: %d, Ceiling Width: %d, Wall Height: %d\n",
//            head->data.material, head->data.length, head->data.ceilingWidth, head->data.wallHeight);
//        head = head->next;
//    }
//}
//void search(Node* head, char mater)
//{
//    while (head!=NULL)
//    {
//        if (strcmp(mater,head->data)==0)
//        {
//           printf("Material: %s, Length: %d, Ceiling Width: %d, Wall Height: %d\n",
//                head->data.material, head->data.length, head->data.ceilingWidth, head->data.wallHeight);
//            head = head->next;
//        }
//    }
//}
//void main() 
//{
//    setlocale(LC_ALL, "RUS");
//    Cornice array[] = {
//        {"Wood",10,5,3},
//    {"Aluminium",8,4,2},
//    {"Plastic", 12,5,4 },
//    {"Steel", 6,3,2 },
//    {"Metal", 9,6,3}
//    };
//    int size = sizeof(array) / sizeof(array[0]);
//
//    Node* list = arrayToList(array, size);
//    merge(&list);
//
//    printf("��������������� ������:\n");
//    printList(list);
//
//    char mater[20];
//    printf("������� �������� ��� ������: ");
//    scanf_s("%s", mater);
//    search(list, mater);
//    
//
//    return 0;
//}