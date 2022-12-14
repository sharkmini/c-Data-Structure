#pragma once
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <stdbool.h>

typedef int LTDataType;

typedef struct ListNode
{
	struct ListNode* next;
	struct ListNode* prev;
	LTDataType data;
}LTNode;

// 创建一个新结点
LTNode* BuyListNode(LTDataType x);

// 初始化链表
LTNode* ListInit();

// 打印链表
void LTPrint(LTNode* phead);

// 尾插
void LTPushBack(LTNode* phead, LTDataType x);

// 尾删
void LTPopBack(LTNode* phead);

// 头插
void LTPushFront(LTNode* phead, LTDataType x);

// 头删
void LTPopFront(LTNode* phead);

// 查找
LTNode* LTFind(LTNode* phead, LTDataType x);

// 在POS之前插入数据
void LTInsert(LTNode* pos, LTDataType x);

// 删除pos位置的数据
void LTErase(LTNode* pos);

// 链表判空
bool LTEmpty(LTNode* phead);

// 链表大小
size_t LTSize(LTNode* phead);

// 链表销毁
void LTDestroy(LTNode* phead);