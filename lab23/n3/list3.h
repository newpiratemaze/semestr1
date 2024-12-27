#ifndef _LIST_H
#define _LIST_H

#include<stdio.h>
#include<stdlib.h>

typedef struct {
    char material[20];
    int length;
    int ceilingWidth;
    int wallHeight;
} Cornice;

typedef struct Node {
    Cornice data;
    struct Node* next;
} Node;

Node* createNode(Cornice data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void addNode(Node** head, Cornice data) {
    Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}

void merge(Node** headRef) {
    Node* head = *headRef;
    if (!head || !head->next) return;

    Node* mid = head;
    Node* fast = head->next;

    while (fast && fast->next) {
        mid = mid->next;
        fast = fast->next->next;
    }

    Node* left = head;
    Node* right = mid->next;
    mid->next = NULL;

    merge(&left);
    merge(&right);

    Node* merged = NULL;
    Node** tail = &merged;

    while (left && right) {
        if (left->data.length <= right->data.length) {
            *tail = left;
            left = left->next;
        }
        else {
            *tail = right;
            right = right->next;
        }
        tail = &(*tail)->next;
    }

    *tail = left ? left : right;
    *headRef = merged;
}



Node* searchByMaterial(Node* head, const char* material) {
    while (head) {
        if (strcmp(head->data.material, material) == 0) {
            return head;
        }
        head = head->next;
    }
    return NULL;
}


#endif /* _LIST_H */