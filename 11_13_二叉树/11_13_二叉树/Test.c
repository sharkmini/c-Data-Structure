#define _CRT_SECURE_NO_WARNINGS 1
#include "Heap.h"

void TestHeap1()
{
	HP hp;
	int array[] = { 27, 15, 19, 18, 28, 34, 65, 49, 25, 37 };
	HeapInit(&hp);
	for (int i = 0; i < sizeof(array) / sizeof(array[0]); i++)
	{
		HeapPush(&hp, array[i]);
	}
	HeapPrint(&hp);

}

int main()
{
	TestHeap1();
	return 0;
}