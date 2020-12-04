#include "SeqList.h"

void InitSeqlist(SL *s)//初始化动态顺序表
{
	assert(s);
	s->array = (DataType*)malloc(3 * sizeof(DataType));
	assert(s->array);
	s->size = 0;
	s->capacity = 3;
}

void CheckCapacity(SL *s)
{
	if (s->size == s->capacity)
	{
		s->array = (DataType*)realloc(s->array, 2 * s->capacity*sizeof(DataType));
		assert(s->array);
		s->capacity *= 2;

	}
}

void PushBack(SL *s, DataType x)//
{
	assert(s);
	CheckCapacity(s);
	s->array[s->size++] = x;
}

//头插 给顺序表头部插入一个数字
void PushFront(SL *s, DataType x)//头插
{
	int i = s->size;//顺序表总容量
	assert(s);
	for (; i >= 0; i--){
		s -> array[i] = s->array[i - 1];
	}
	s->array[0] = x;
	s->size++;
}

//头删 顺序表容量减少一个
void PopFront(SL *s)
{
	int i = 0;
	if (s->size == 1)
	{
		s -> size = 0;
	}
	else
	{
		for (i = 0; i < s->size; i++)
		{
			s->array[i] = s->array[i + 1];
		}
	}
	s->size--;
}

void PopBack(SL *s)//尾删
{
	assert(s);
	if (s->size == 0)
	{
		printf("顺序表里面无数据\n");
		return;
	}
	s->size--;
}

//遍历顺序表 并打印
void PrintSeqlist(SL *s)//打印动态顺序表
{
	size_t i = 0;
	for (; i < s->size; ++i)
	{
		printf("%3d", s->array[i]);
	}
	printf("\n");
}