#include "SeqList.h"

void TestSeqlist()
{

	SL s;
	InitSeqlist(&s);
	printf("Œ≤≤Â: \n");
	PushBack(&s, 1);
	PushBack(&s, 2);
	PushBack(&s, 3);
	PushBack(&s, 4);
	PushBack(&s, 5);

	PrintSeqlist(&s);
	printf("Õ∑≤Â:\n");
	PushFront(&s, -1);
	PushFront(&s, -2);

	PrintSeqlist(&s);

	printf("Õ∑…æ:\n");
	PopFront(&s);
	PrintSeqlist(&s);

	printf("Œ≤…æ:\n");
	PopBack(&s);
	PrintSeqlist(&s);

}
int main()
{
	TestSeqlist();//≤‚ ‘
	system("pause");
	return 0;
}