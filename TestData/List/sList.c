#include "SList.h"

//链表缺点：相比顺序表，申请内存效率低

//尾部删除
void SListPopBack(SListNode** pphead)
{
	//1、空
	//2、一个节点
	//3、一个以上节点
	if (*pphead == NULL)
	{
		return;
	}
	else if ((*pphead)->next == NULL){
		free(*pphead);
		*pphead = NULL;
	}
	else{
		SListNode* prev = NULL;
		SListNode* tail = *pphead;
		while (tail->next != NULL)
		{
			prev = tail;
			tail = tail->next;
		}
		free(tail);
		tail = NULL;//写上不写都没事
		prev->next = NULL;

	}
}

SListNode * BuySListNode(SListDataType x)
{
	//插入节点
	SListNode * newNode = (SListNode*)malloc(sizeof(SListNode));
	if (newNode == NULL)
	{
		printf("申请节点失败\n");
		exit(-1);
	}
	newNode->data = x;
	newNode->next = NULL;

	return newNode;
}
//尾部插入数据
void SListPushBack(SListNode** pphead,SListDataType x)//尾插
{
	SListNode* newNode = BuySListNode(x);
	if (*pphead == NULL)
	{
		*pphead = newNode;
	}
	else
	{
		//遍历找尾巴
		SListNode* tail = *pphead;
		while (tail->next != NULL)//访问空指针，出问题  已经修改
		{
			tail = tail->next;//形象理解tail在移动，尾部节点tail为空
			// 切勿tail ++；
		}
		tail->next = newNode;
	}
}
//打印 遍历链表 注意cur
void SListPrint(SListNode*phead)
{
	SListNode* cur = phead;
	while (cur!=NULL){
		printf("%d->",cur->data);
		cur = cur->next;//前一个结构体成员next存放下一个结构体指针
	}
	printf("NULL\n");
}