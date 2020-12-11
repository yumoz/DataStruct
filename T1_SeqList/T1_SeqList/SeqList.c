#include"SeqList.h"

//顺序表初始化
void SeqListInit(SL *ps)
{
	//ps->a = (SLDatatype*)malloc(sizeof(SLDatatype) * 4);

	ps->size = 0;
	//ps->a = NULL;
	//ps->capacity = 0;
}

//顺序表尾插
void SeqListPushBack(SL*ps, SLDatatype x)
{
	assert(ps);
	ps->a[ps->size] = x;
	ps->size++;
}
//顺序表尾删
void SeqListPopBack(SL*ps)
{
	assert(ps);
	ps->a[ps->size - 1] = 0;
	ps->size--;
}

//顺序表头插
void SeqListPushFront(SL* ps, SLDatatype x)
{
	assert(ps);
	int end = ps->size - 1;//末尾
	while (end >= 0){
		ps->a[end + 1] = ps->a[end];
		--end;
	}
	ps->a[0] = x;//插入数据
	ps->size++;//顺序表容量扩展1
}

//顺序表头删
void SeqListPopFront(SL*ps)
{
	assert(ps);
	int start = 0;
	while (start < ps->size - 1){
		ps->a[start] = ps->a[start + 1];
		++start;
	}
	ps->size--;//删除元素，容量缩小
}

//打印顺序表内容
void SeqListPrint(SL* ps)
{
	assert(ps);
	for (int i = 0; i < ps->size; ++i)
	{
		printf("%3d ", ps->a[i]);
	}
	printf("\n");
}