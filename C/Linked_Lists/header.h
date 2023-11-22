/*Here we'll hold all the basic includes to prevent repetetion*/
#ifndef _HEADER_H_
#define _HEEADER_H_

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/*Declaring the list*/
typedef struct list_s {
    int data;
    struct list_s *next;
} list_caller;

list_caller *create_node(list_caller **head, int data);

#endif