#pragma once
#include <stdio.h>
#include <stdlib.h>
#include "time.h"

typedef int SLDataType;

typedef struct SListNode
{
    SLDataType data;
    struct SListNode *next;
} Node;
typedef struct SListNode *LinkList;


void SListInitBack(LinkList* p, int NodeNum);
void SListInitPop(LinkList* p, int NodeNum);
void SListPrint(LinkList L);
void SListPushBack(LinkList L, SLDataType x);
void SListPushPop(LinkList L, SLDataType x);