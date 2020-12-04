#include "SList.h"

int main()
{
	//SListNode* phead = NULL;
	SListNode * pList=NULL;
		
	SListPushBack(&pList, 1);
	SListPushBack(&pList, 2);
	SListPushBack(&pList, 3);
	SListPushBack(&pList, 4);

	SListPrint(pList);

	SListPopBack(&pList);
	SListPopBack(&pList);
	SListPopBack(&pList);
	SListPopBack(&pList);

	SListPrint(pList);

	system("pause");
	return 0;
}