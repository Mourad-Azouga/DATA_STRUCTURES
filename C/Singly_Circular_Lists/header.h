#ifndef HEADER_H
#define HEADER_H
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
typedef struct Clist {
    int data;
    struct Clist *next;
} list_caller;

#endif /*HEADER_H*/