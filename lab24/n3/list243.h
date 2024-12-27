#ifndef _LIST2_H
#define _LIST2_H
#define TYPE char


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
//#include "list243.h"



struct  Node {

    TYPE data;

    struct Node* next;

};

typedef struct {

    struct  Node* queue;

    struct  Node* front;

    struct  Node* back;

} queue_list;


queue_list* createQueue() {
    queue_list* que = (queue_list*)malloc(sizeof(queue_list));
    que->queue = NULL;
    que->front = NULL;
    que->back = NULL;
    return que;
}

void enQueue(queue_list* que, TYPE element) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = element;
    newNode->next = NULL;

    if (que->back == NULL) {
        que->front = newNode;
        que->back = newNode;
    }
    else {
        que->back->next = newNode;
        que->back = newNode;
    }
}


TYPE deQueue(queue_list* que) {
    if (que->front == NULL) {
        fprintf(stderr, "Очередь пуста!\n");
        exit(EXIT_FAILURE);
    }

    struct Node* temp = que->front;
    TYPE data = temp->data;

    que->front = que->front->next;
    if (que->front == NULL) {
        que->back = NULL;
    }

    free(temp);
    return data;
}


int isQueueEmpty(queue_list* que) {
    return que->front == NULL;
}


void processFile(const char* inputFile, const char* outputFile) {
    FILE* in = fopen(inputFile, "r");
    FILE* out = fopen(outputFile, "w");

    if (!in || !out) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    char line[1024];
    while (fgets(line, sizeof(line), in)) {
        queue_list* digitQueue = createQueue();
        char result[1024] = "";
        size_t len = strlen(line);

        
        if (len > 0 && line[len - 1] == '\n') {
            line[len - 1] = '\0';
        }

        for (size_t i = 0; i < strlen(line); i++) {
            if (isdigit(line[i])) {
                enQueue(digitQueue, line[i]);
            }
            else {
                size_t resLen = strlen(result);
                result[resLen] = line[i];
                result[resLen + 1] = '\0';
            }
        }

       
        while (!isQueueEmpty(digitQueue)) {
            size_t resLen = strlen(result);
            result[resLen] = deQueue(digitQueue);
            result[resLen + 1] = '\0';
        }

        fprintf(out, "%s\n", result);

        // Очистка памяти очереди
        free(digitQueue);
    }

    fclose(in);
    fclose(out);
}


#endif /*_LIST_H*/
