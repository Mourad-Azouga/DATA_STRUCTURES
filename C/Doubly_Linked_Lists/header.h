#ifndef HEADER_H
#define HEADER_H
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/*Declaring the list*/
typedef struct dlist {
    int data;
    struct dlist *next;
    struct dlist *prev;
} list_caller;

#endif /*HEADER_H*/