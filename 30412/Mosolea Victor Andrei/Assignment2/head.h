//
// Created by Victor on 3/6/2020.
//

#ifndef ASSIGNMENT2_HEAD_H
#define ASSIGNMENT2_HEAD_H

#endif //ASSIGNMENT2_HEAD_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_COMMAND 15
typedef struct node {
    int data;
    struct node *next, *previous;
} Node;

typedef struct list {
    Node *first, *last;
} List;

void initList(List *list);

void addFirst(List *list, int data);

void addLast(List *list, int data);

void deleteFirst(List *list);

void deleteLast(List *list);

void removeAll(List *list);

void deleteX(List *list, int data);

void printList(List list, FILE *g);

void printFirstN(List list, int n, FILE *g);

void printLastN(List list, int n, FILE *g);
