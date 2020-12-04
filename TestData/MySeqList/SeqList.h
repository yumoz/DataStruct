#define _CRT_SECURE_NO_WARNINGS 1
#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<malloc.h>

typedef int DataType;
typedef struct 
{
	DataType * array;//存储空间的基地址
	size_t  size;//有效数据的个数
	size_t capacity; //当前分配的存储容量（以sizeof（DataType）为单位）
}SL;

void InitSeqlist(SL *s);//初始化动态顺序表
void PushFront(SL *s, DataType x);//头插
void PopFront(SL *s);//头删
void PushBack(SL *s, DataType x);//尾插
void PopBack(SL *s);//尾删
void PrintSeqlist(SL *s);//打印动态顺序表
void CheckCapacity(SL *s);//判断容量是否已经满了
void DestorySeqlist(SL *s);//销毁顺序表
void SeqlistDClear(SL *s);//清空数据表
void Insert(SL *s, int pos, DataType x);//在指定位置插入一个元素
int SeqListDSize(SL *s);// 获取元素个数