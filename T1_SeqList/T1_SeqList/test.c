#include"SeqList.h"

void test()
{
	SL s;
	//˳����ʼ��
	SeqListInit(&s);
	printf("��ʼ����");
	SeqListPrint(&s);
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 4);
	SeqListPushBack(&s, 5);
	SeqListPushBack(&s, 6);
	SeqListPushBack(&s, 7);
	SeqListPushBack(&s, 8);
	printf("β���");
	SeqListPrint(&s);

	SeqListPopBack(&s);
	SeqListPopBack(&s);
	printf("βɾ��");
	SeqListPrint(&s);


	SeqListPushFront(&s, -1);
	SeqListPushFront(&s, -2);
	printf("ͷ���");
	SeqListPrint(&s);

	SeqListPopFront(&s);
	SeqListPopFront(&s);
	printf("ͷɾ��");
	SeqListPrint(&s);

}

int main()
{
	test();
	system("pause");
	return 0;
}