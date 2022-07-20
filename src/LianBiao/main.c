#include "SList.h"

int main(){
    LinkList L;
    SListInitPop(&L,6);
    SListPushBack(L,233);
    SListPushBack(L,666);
    SListPushPop(L,233);
    SListPushPop(L,666);
    SListPrint(L);
    return 0;
}