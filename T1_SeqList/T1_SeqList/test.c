#include"SeqList.h"

void test()
{
	SL s;
	//顺序表初始化
	SeqListInit(&s);
	printf("初始化：");
	SeqListPrint(&s);
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 4);
	SeqListPushBack(&s, 5);
	SeqListPushBack(&s, 6);
	SeqListPushBack(&s, 7);
	SeqListPushBack(&s, 8);
	printf("尾插后：");
	SeqListPrint(&s);

	SeqListPopBack(&s);
	SeqListPopBack(&s);
	printf("尾删后：");
	SeqListPrint(&s);


	SeqListPushFront(&s, -1);
	SeqListPushFront(&s, -2);
	printf("头插后：");
	SeqListPrint(&s);

	SeqListPopFront(&s);
	SeqListPopFront(&s);
	printf("头删后：");
	SeqListPrint(&s);

}

int main()
{
	test();
	system("pause");
	return 0;
}