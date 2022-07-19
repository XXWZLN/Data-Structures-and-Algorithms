#include "SeqList.h"

void SeqListInit(SL* ps) { ps->size = ps->capactity = 0; }

void SeqListPrint(SL* ps) {
  for (int i = 0; i < ps->size; i++) {
    printf("%d ", ps->a[i]);
  }
  printf("\n");
}

void SeqListPushBack(SL* ps, SLDataType x) {
  //如果没有空间或者空间不足，扩容
  if (ps->size == ps->capactity) {
    int newcapacity = ps->capactity == 0 ? 4 : ps->capactity * 2;
    SLDataType* tmp =
        (SLDataType*)realloc(ps->a, newcapacity * sizeof(SLDataType));
    if (tmp == NULL) {
      printf("realloc fail\n");
      exit(-1);
    }
    ps->a = tmp;
    ps->capactity = newcapacity;
  }
  ps->a[ps->size] = x;
  ps->size++;
}

void SeqListPopBack(SL* ps) {
  ps->a[ps->size - 1] = 0;
  ps->size--;
}


void SeqListPushFront(SL* ps, SLDataType x) {
  int end = ps->size - 1;
  while (end >= 0) {
    ps->a[end + 1] = ps->a[end];
    end--;
  }
  ps->a[0]=x;
  ps->size++;
}

// void SeqListPopFront(SL* ps);

void SeqListDestroy(SL* ps) {
  free(ps->a);
  ps->a = NULL;
  ps->capactity = ps->size = 0;
}