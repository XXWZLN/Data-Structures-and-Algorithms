// #include "SeqList.h"

// int main(){
//     SL sl;
//     SeqListInit(&sl);
//     SeqListPushBack(&sl,1);
//     SeqListPushBack(&sl,2);
//     SeqListPushBack(&sl,3);
//     SeqListPushBack(&sl,4);
//     SeqListPushFront(&sl,6);
//     SeqListPrint(&sl);
//     SeqListDestroy(&sl);
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main()
{
   char *str;
 
   /* 最初的内存分配 */
   str = (char *) malloc(15);
   strcpy(str, "runoob");
   *(str+18)='d';
   printf("String = %s,  Address = %p\n", str, str);
 

 
   /* 释放已分配的内存 */
   free(str);
 
   return(0);
}