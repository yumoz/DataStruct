#include"SeqList.h"

//˳����ʼ��
void SeqListInit(SL *ps)
{
	//ps->a = (SLDatatype*)malloc(sizeof(SLDatatype) * 4);

	ps->size = 0;
	//ps->a = NULL;
	//ps->capacity = 0;
}

//˳���β��
void SeqListPushBack(SL*ps, SLDatatype x)
{
	assert(ps);
	ps->a[ps->size] = x;
	ps->size++;
}
//˳���βɾ
void SeqListPopBack(SL*ps)
{
	assert(ps);
	ps->a[ps->size - 1] = 0;
	ps->size--;
}

//˳���ͷ��
void SeqListPushFront(SL* ps, SLDatatype x)
{
	assert(ps);
	int end = ps->size - 1;//ĩβ
	while (end >= 0){
		ps->a[end + 1] = ps->a[end];
		--end;
	}
	ps->a[0] = x;//��������
	ps->size++;//˳���������չ1
}

//˳���ͷɾ
void SeqListPopFront(SL*ps)
{
	assert(ps);
	int start = 0;
	while (start < ps->size - 1){
		ps->a[start] = ps->a[start + 1];
		++start;
	}
	ps->size--;//ɾ��Ԫ�أ�������С
}

//��ӡ˳�������
void SeqListPrint(SL* ps)
{
	assert(ps);
	for (int i = 0; i < ps->size; ++i)
	{
		printf("%3d ", ps->a[i]);
	}
	printf("\n");
}