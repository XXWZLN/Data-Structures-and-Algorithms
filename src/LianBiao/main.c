#include "SList.h"

int main(){
    LinkList L;
    SListInitPop(&L,6);
    SListPushBack(L,2333);
    SListPushBack(L,6666);
    SListPushPop(L,2333);
    SListPushPop(L,6666);
    SListPrint(L);
    return 0;
}