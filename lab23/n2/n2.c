#include <stdio.h>
#include<locale.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct Page {
    char url[256];
    time_t visitTime;
    struct Page* next;
} Page;

void initList(Page** head) {
    *head = NULL;
}

void addPage(Page** head, const char* url, time_t visitTime) {
    Page* newPage = (Page*)malloc(sizeof(Page));
    strcpy(newPage->url, url);
    newPage->visitTime = visitTime;
    newPage->next = NULL;

    if (*head == NULL) {
        *head = newPage;
    }
    else {
        Page* temp = *head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newPage;
    }
}

void printList(Page* head) {
    int index = 1;
    while (head != NULL) {
        printf("%d. %s | %s", index++, head->url, ctime(&head->visitTime));
        head = head->next;
    }
}

void deletePageByTime(Page** head, time_t visitTime) {
    Page* current = *head, * prev = NULL;

    while (current != NULL) {
        if (difftime(current->visitTime, visitTime) == 0) {
            if (prev == NULL) {
                *head = current->next;
            }
            else {
                prev->next = current->next;
            }
            Page* tmp = current;
            current = current->next;
            free(tmp);
            printf("Страница удалена.\n");
            return; 
        }
        else {
            prev = current;
            current = current->next;
        }
    }
    printf("Запись не найдена.\n");
}

int main() 
{
    setlocale(LC_ALL, "RUS");
    Page* history;
    initList(&history);

    while (1) {
        char url[256];
        int visitYear, visitMonth, visitDay, visitHour, visitMinute;

        printf("Введите URL (или 'exit' для выхода): ");
        scanf("%s", url);
        if (strcmp(url, "exit") == 0) break;

        printf("Введите дату посещения (ГГГГ ММ ДД ЧЧ ММ): ");
        scanf("%d %d %d %d %d", &visitYear, &visitMonth, &visitDay, &visitHour, &visitMinute);

        struct tm visitTime = { 0 };
        visitTime.tm_year = visitYear - 1900;
        visitTime.tm_mon = visitMonth - 1;
        visitTime.tm_mday = visitDay;
        visitTime.tm_hour = visitHour;
        visitTime.tm_min = visitMinute;
        visitTime.tm_isdst = -1;
        addPage(&history, url, mktime(&visitTime));
    }

    printf("\nИстория перед удалением:\n");
    printList(history);
    printf("Введите количество удаляемых страниц: ");
    int count;
    scanf("%d", &count);
    for (int i = 0;i < count;i++)
    {
    int deleteYear, deleteMonth, deleteDay, deleteHour, deleteMinute;
    printf("Введите дату и время для удаления (ГГГГ ММ ДД ЧЧ ММ): ");
    scanf("%d %d %d %d %d", &deleteYear, &deleteMonth, &deleteDay, &deleteHour, &deleteMinute);

    struct tm deleteTime = { 0 };
    deleteTime.tm_year = deleteYear - 1900;
    deleteTime.tm_mon = deleteMonth - 1;
    deleteTime.tm_mday = deleteDay;
    deleteTime.tm_hour = deleteHour;
    deleteTime.tm_min = deleteMinute;
    deleteTime.tm_isdst = -1;
    
        deletePageByTime(&history, mktime(&deleteTime));
        printf("\nИстория после удаления:\n");
        printList(history);
    }


    printf("Хотите добавить элементы в конец списка?\n1) Да\n2) Нет");
    int choice;
    scanf_s("%d", &choice);

    switch (choice)
    {
    case 1:
    {
        while (1) {
            char url[256];
            int visitYear, visitMonth, visitDay, visitHour, visitMinute;

            printf("Введите URL (или 'exit' для выхода): ");
            scanf("%s", url);
            if (strcmp(url, "exit") == 0) break;

            printf("Введите дату посещения (ГГГГ ММ ДД ЧЧ ММ): ");
            scanf("%d %d %d %d %d", &visitYear, &visitMonth, &visitDay, &visitHour, &visitMinute);

            struct tm visitTime = { 0 };
            visitTime.tm_year = visitYear - 1900;
            visitTime.tm_mon = visitMonth - 1;
            visitTime.tm_mday = visitDay;
            visitTime.tm_hour = visitHour;
            visitTime.tm_min = visitMinute;
            visitTime.tm_isdst = -1;
            addPage(&history, url, mktime(&visitTime));

        }
        printf("\nИстория:\n");
        printList(history);
        break;
    }
    case 2:
    {
        return;
    }
    }


    

    while (history != NULL) {
        Page* temp = history;
        history = history->next;
        free(temp);
    }

    return 0;
}
































//#include <stdio.h>
//#include<locale.h>
//#include <stdlib.h>
//#include <string.h>
//#include <time.h>
//
//typedef struct Page {
//    char url[256];
//    time_t visitTime;
//    struct Page* next;
//} Page;
//
//void initList(Page** head) {
//    *head = NULL;
//}
//
//void addPage(Page** head, const char* url, time_t visitTime) {
//    Page* newPage = (Page*)malloc(sizeof(Page));
//    strcpy(newPage->url, url);
//    newPage->visitTime = visitTime;
//    newPage->next = NULL;
//
//    if (*head == NULL) {
//        *head = newPage;
//    }
//    else {
//        Page* temp = *head;
//        while (temp->next != NULL) {
//            temp = temp->next;
//        }
//        temp->next = newPage;
//    }
//}
//
//void printList(Page* head) {
//    int index = 1;
//    while (head != NULL) {
//        printf("%d. %s | %s", index++, head->url, ctime(&head->visitTime));
//        head = head->next;
//    }
//}
//
//void deletePageByTime(Page** head, time_t timeThreshold) {
//    Page* current = *head, * prev = NULL;
//
//    while (current != NULL) {
//        if (difftime(current->visitTime, timeThreshold) > 0) {
//            if (prev == NULL) {
//                *head = current->next;
//            }
//            else {
//                prev->next = current->next;
//            }
//            Page* tmp = current;
//            current = current->next;
//            free(tmp);
//        }
//        else {
//            prev = current;
//            current = current->next;
//        }
//    }
//}
//
//int main() 
//{
//    setlocale(LC_ALL, "RUS");
//    Page* history;
//    initList(&history);
//
//    while (1) {
//        char url[256];
//        int visitYear, visitMonth, visitDay, visitHour, visitMinute;
//
//        printf("Введите URL (или 'exit' для выхода): ");
//        scanf("%s", url);
//        if (strcmp(url, "exit") == 0) break;
//
//        printf("Введите дату посещения (ГГГГ ММ ДД ЧЧ ММ): ");
//        scanf("%d %d %d %d %d", &visitYear, &visitMonth, &visitDay, &visitHour, &visitMinute);
//
//        struct tm visitTime = { 0 };
//        visitTime.tm_year = visitYear - 1900;
//        visitTime.tm_mon = visitMonth - 1;
//        visitTime.tm_mday = visitDay;
//        visitTime.tm_hour = visitHour;
//        visitTime.tm_min = visitMinute;
//        visitTime.tm_isdst = -1;
//        addPage(&history, url, mktime(&visitTime));
//    }
//
//    printf("\nHistory before deletion:\n");
//    printList(history);
//
//    time_t threshold;
//    printf("Введите время удаления (в секундах от текущего времени): ");
//    scanf("%ld", &threshold);
//    threshold = time(NULL) - threshold;
//
//    deletePageByTime(&history, threshold);
//
//    printf("\nHistory after deletion:\n");
//    printList(history);
//
//    while (history != NULL) {
//        Page* temp = history;
//        history = history->next;
//        free(temp);
//    }
//
//    return 0;
//}
