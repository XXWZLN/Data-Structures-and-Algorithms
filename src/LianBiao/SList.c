#include "SList.h"

//尾插
void SListInitBack(LinkList *p, int NodeNum)
{
    srand(time(0));
    LinkList ptmp;
    *p = (LinkList)malloc(sizeof(Node));
    (*p)->next = NULL;
    if (NodeNum != 0)
    {
        for (int i = 1; i <= NodeNum; i++)
        {
            ptmp = (LinkList)malloc(sizeof(Node));
            ptmp->data = rand() % 100 + 1;
            ptmp->next = (*p)->next;
            (*p)->next = ptmp;
        }
    }
}

void SListInitPop(LinkList* p, int NodeNum){
        srand(time(0));
    LinkList ptmp,pf;
    *p = (LinkList)malloc(sizeof(Node));
    (*p)->next = NULL;
    pf=*p;
    if (NodeNum != 0)
    {
        for (int i = 1; i <= NodeNum; i++)
        {
            ptmp = (LinkList)malloc(sizeof(Node));
            ptmp->data = rand() % 100 + 1;
            ptmp->next = pf->next;
            pf->next = ptmp;
            pf=ptmp;
        }
    }
}

void SListPrint(LinkList phead)
{
    LinkList cur = phead->next;
    while (cur != NULL)
    {
        printf("%d  ", cur->data);
        cur = cur->next;
    }
}

void SListPushBack(LinkList L, SLDataType x)
{
    LinkList ptmp=L->next;
    while (ptmp->next != NULL)
    {
        ptmp = ptmp->next;
    }
    LinkList PushP = (LinkList)malloc(sizeof(Node));
    PushP->next = ptmp->next;
    ptmp->next = PushP;
    PushP->data = x; 
}

void SListPushPop(LinkList L, SLDataType x){
    LinkList PushP = (LinkList)malloc(sizeof(Node));
    PushP->data = x; 
    PushP->next=L->next;
    L->next=PushP;
}