#include "SeqList.h"

void InitSeqlist(SL *s)//��ʼ����̬˳���
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

//ͷ�� ��˳���ͷ������һ������
void PushFront(SL *s, DataType x)//ͷ��
{
	int i = s->size;//˳���������
	assert(s);
	for (; i >= 0; i--){
		s -> array[i] = s->array[i - 1];
	}
	s->array[0] = x;
	s->size++;
}

//ͷɾ ˳�����������һ��
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

void PopBack(SL *s)//βɾ
{
	assert(s);
	if (s->size == 0)
	{
		printf("˳�������������\n");
		return;
	}
	s->size--;
}

//����˳��� ����ӡ
void PrintSeqlist(SL *s)//��ӡ��̬˳���
{
	size_t i = 0;
	for (; i < s->size; ++i)
	{
		printf("%3d", s->array[i]);
	}
	printf("\n");
}