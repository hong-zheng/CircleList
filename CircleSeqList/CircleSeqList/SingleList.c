#define _CRT_SRCURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
typedef int Type;
typedef struct Node{
	struct Node* _next;
	Type _data;
}Node;

// 实现不带头单向循环链表
typedef struct SingleList{
	Node* _head; 
	// 表示链表真正的头结点，即第一个有效数据位置
}SingleList;

// 初始化
void SingleListInit(SingleList* sl){
	// 空链表
	sl->_head = NULL;
}
Node* createNode(Type data){
	Node* node = (Node*)malloc(sizeof(Node));
	node->_data = data;
	node->_next = NULL;
	return node;
}
// 插入
void SingleListPushBack(SingleList* sl, Type data){
	

}



void SingleListPushFront(SingleList* sl, Type data){
	// 是否为空链表
	Node* node = createNode(data);
	if (NULL == sl->_head){
		sl->_head = createNode(data);
	}
	else{
		node->_next = sl->_head;
		sl->_head = node;
	}
}

void SingleListPopBack(SingleList* sl){

}
void SingleListPrint(SingleList* sl){
	Node* cur = sl->_head;
	while (cur){
		printf("%d ",cur->_data);
		cur = cur->_next;
	}
	printf("\n");
}

int mainqqq(){
	SingleList sl;
	SingleListInit(&sl);
	SingleListPushFront(&sl, 1);
	SingleListPushFront(&sl, 2);
	SingleListPushFront(&sl, 3);
	SingleListPushFront(&sl, 4);
	SingleListPushFront(&sl, 5);
	SingleListPushFront(&sl, 6);
	SingleListPrint(&sl);
	system("pause");
	return 0;
}