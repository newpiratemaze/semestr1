#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "list.h"





void printList(List head) 
{
    while (head != NULL) 
    {
        printf("Number: %d, Name: %s\n", head->number, head->name);
        head = head->next;
    }
}

int main() {
    List myList;
    initlist(&myList);

    insertfront(&myList, 1);
    insertfront(&myList, 2);
    insertfront(&myList, 3);
    insertfront(&myList, 4);

    strcpy(myList->next->name, "Item 3");
    strcpy(myList->next->next->name, "Item 2");
    strcpy(myList->next->next->next->name, "Item 1");
    strcpy(myList->name, "Item 4");
    
    printList(myList);


  

    return 0;
}





