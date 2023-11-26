#ifndef HEADER_H
#define HEADER_H
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
typedef struct CDlist {
    int data;
    struct CDlist *next;
    struct CDlist *prev;
} list_caller;

#endif /*HEADER_H*/