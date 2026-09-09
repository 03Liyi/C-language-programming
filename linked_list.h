#include <stdio.h>
#include <stdio.h>
typedef enum {False,True} result;
typedef int ElemType ;
typedef struct node{
    ElemType data ;
    struct node *next ;
}Node ;

Node*InitilizeList(void); //初始化链表表头

void AppendElem(Node*L, ElemType e) ;//在链表末尾增加元素 ,实现尾插

ElemType DeleteElem(Node*L, unsigned int i); //按位置删除元素, *e 指向被删除的元素, 返回被删除的元素

result InsertElem(Node*L, unsigned int i, ElemType e) ;//按位置插入元素e

ElemType FindElem(Node*L, unsigned int k) ; //按位置查找元素,如果找到就返回对应元素的值，否额返回0

void FreeList(Node*L); //清空列表






