#pragma once

#include<stdio.h>
#include<stdlib.h>

typedef int SListDataType;

//链表 重定义
typedef struct SListNode 
{
	SListDataType data;
	struct SListNode * next;//存放下一个结构体的首地址
}SListNode;

//增删查改
void SListPushBack(SListNode** pphead, SListDataType x);//尾添加
void SListPopBack(SListNode** pphead);//尾删除

void SListPushFront(SListNode* phead, SListDataType x); //头添加
void SListPopFront(SListNode* phead);//头删除

void SListPrint(SListNode*phead);


