#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<malloc.h>

typedef int DataType;
typedef struct 
{
	DataType * array;//�洢�ռ�Ļ���ַ
	size_t  size;//��Ч���ݵĸ���
	size_t capacity; //��ǰ����Ĵ洢��������sizeof��DataType��Ϊ��λ��
}SL;

void InitSeqlist(SL *s);//��ʼ����̬˳���
void PushFront(SL *s, DataType x);//ͷ��
void PopFront(SL *s);//ͷɾ
void PushBack(SL *s, DataType x);//β��
void PopBack(SL *s);//βɾ
void PrintSeqlist(SL *s);//��ӡ��̬˳���
void CheckCapacity(SL *s);//�ж������Ƿ��Ѿ�����
void DestorySeqlist(SL *s);//����˳���
void SeqlistDClear(SL *s);//������ݱ�
void Insert(SL *s, int pos, DataType x);//��ָ��λ�ò���һ��Ԫ��
int SeqListDSize(SL *s);// ��ȡԪ�ظ���