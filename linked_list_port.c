#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"
Node*InitilizeList(void) //初始化链表表头
{
    Node*pnode = (Node*)malloc(sizeof(Node));
    pnode->next = NULL;

return pnode;
}
void AppendElem(Node*L, ElemType e) //在链表末尾增加元素 ,实现尾插
{
    Node*new_node = (Node*)malloc(sizeof(Node));
    Node*plist = L;
    while(plist->next!=NULL)
        plist=plist->next;
    new_node->data = e;
    new_node->next = NULL;
    plist->next = new_node;
    
}
ElemType DeleteElem(Node*L, unsigned int i) //按位置删除元素, 若删除成功则返回被删除的元素, 否则返会0
{
    Node*plist = L;
    unsigned int j=0;
    ElemType e=0;
    //明确这个列表有多少个节点(不包括头节点)
    while(plist->next!=NULL){    //统计有多少个节点数!!!
        plist = plist->next ;
        j++;
    }
    if(i>j)
    return e;
    j=0;
    plist = L;

    //找到要删除节点元素的前一个节点
    while(j<i-1){
        plist=plist->next ; 
        j++;
    }
    Node*delelist = plist->next ;
    plist->next = delelist->next;
    e = delelist->data;
    free(delelist);
    return e ;
}

result InsertElem(Node*L, unsigned int i, ElemType e)//按位置插入元素e
{
    Node*plist = L;
    Node*new_node = (Node*)malloc(sizeof(Node));
    new_node->data = e ;
    unsigned int count = 0;
    //统计有多少个节点数
    while(plist->next!=NULL){
        plist = plist->next ;
        count++ ;
    }
    if(i>count+1){
        printf("The positon is invilid! The position must not over %d", count+1);
        return False ;
    }
    plist = L;
    count = 0;

    //找到要插入位置的节点的前一个:
    while(count<i-1){
        plist = plist->next ;
        count++;
    }
    new_node->next = plist->next ;
    plist->next = new_node ;
    
}

ElemType FindElem(Node*L, unsigned int k)  //按位置查找元素,如果找到就返回对应元素的值，否额返回0(线性查找)
{
    Node*plist = L ;
    unsigned int i=0;
    while(plist->next!=NULL){
        plist=plist->next;
        i++;
    }
    if(k>i){
        printf("The position is invilid, there are only %d element!", i);
        return 0;
    }
    plist = L;
    i=0 ;
    while(i<k){
        plist = plist->next;
        i++;
    }
    return plist->data ;
}

void FreeList(Node*L) //清空列表
{
    Node*p = L->next ;
    Node*q;
    while(p!=NULL){
        q=p->next;
        free(p);
        p=q;
    }
}