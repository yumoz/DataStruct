#pragma once

#include<stdio.h>
#include<stdlib.h>

typedef int SListDataType;

//���� �ض���
typedef struct SListNode 
{
	SListDataType data;
	struct SListNode * next;//�����һ���ṹ����׵�ַ
}SListNode;

//��ɾ���
void SListPushBack(SListNode** pphead, SListDataType x);//β���
void SListPopBack(SListNode** pphead);//βɾ��

void SListPushFront(SListNode* phead, SListDataType x); //ͷ���
void SListPopFront(SListNode* phead);//ͷɾ��

void SListPrint(SListNode*phead);


