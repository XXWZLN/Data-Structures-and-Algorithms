#pragma once
#include <stdio.h>
#include <stdlib.h>
#define N 1000
typedef int SLDataType;

typedef struct SeqList {
  SLDataType* a;
  int size;
  int capactity;    //数组实际能存数据的容量大小

} SL;

void SeqListInit(SL* ps);
void SeqListPrint(SL* ps);
void SeqListPushBack(SL* ps, SLDataType x);
void SeqListPopBack(SL* ps);
void SeqListPushFront(SL* ps, SLDataType x);
void SeqListPopFront(SL* ps);
void SeqListDestroy(SL* ps);
