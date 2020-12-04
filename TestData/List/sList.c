#include "SList.h"

//����ȱ�㣺���˳��������ڴ�Ч�ʵ�

//β��ɾ��
void SListPopBack(SListNode** pphead)
{
	//1����
	//2��һ���ڵ�
	//3��һ�����Ͻڵ�
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
		tail = NULL;//д�ϲ�д��û��
		prev->next = NULL;

	}
}

SListNode * BuySListNode(SListDataType x)
{
	//����ڵ�
	SListNode * newNode = (SListNode*)malloc(sizeof(SListNode));
	if (newNode == NULL)
	{
		printf("����ڵ�ʧ��\n");
		exit(-1);
	}
	newNode->data = x;
	newNode->next = NULL;

	return newNode;
}
//β����������
void SListPushBack(SListNode** pphead,SListDataType x)//β��
{
	SListNode* newNode = BuySListNode(x);
	if (*pphead == NULL)
	{
		*pphead = newNode;
	}
	else
	{
		//������β��
		SListNode* tail = *pphead;
		while (tail->next != NULL)//���ʿ�ָ�룬������  �Ѿ��޸�
		{
			tail = tail->next;//�������tail���ƶ���β���ڵ�tailΪ��
			// ����tail ++��
		}
		tail->next = newNode;
	}
}
//��ӡ �������� ע��cur
void SListPrint(SListNode*phead)
{
	SListNode* cur = phead;
	while (cur!=NULL){
		printf("%d->",cur->data);
		cur = cur->next;//ǰһ���ṹ���Աnext�����һ���ṹ��ָ��
	}
	printf("NULL\n");
}