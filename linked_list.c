#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"
// 建立一个代表头节点的链表，想办法高效查找第K个位置的元素
int main(){
    Node *list = InitilizeList(); //初始化一个链表
    int i;
    int k;
    ElemType e;
    while(scanf("%d",e)==1&&e>=0){
        AppendElem(list, e);
    }
    while(getchat()!='\n')
        continue;
    printf("你想查第几个元素？\n");
    scanf("%d", k);
    if(! FindElem(list, k))
        printf("这个列表中没有你要找的元素");
    else
        printf("这个列表的第 %d 个元素是: %d", k, FindElem(list, k));
    
return 0;
}
