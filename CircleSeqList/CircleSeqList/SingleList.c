#define _CRT_SRCURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
typedef int Type;
typedef struct Node{
	struct Node* _next;
	Type _data;
}Node;

// ʵ�ֲ���ͷ����ѭ������
typedef struct SingleList{
	Node* _head; 
	// ��ʾ����������ͷ��㣬����һ����Ч����λ��
}SingleList;

// ��ʼ��
void SingleListInit(SingleList* sl){
	// ������
	sl->_head = NULL;
}
Node* createNode(Type data){
	Node* node = (Node*)malloc(sizeof(Node));
	node->_data = data;
	node->_next = NULL;
	return node;
}
// ����
void SingleListPushBack(SingleList* sl, Type data){
	

}



void SingleListPushFront(SingleList* sl, Type data){
	// �Ƿ�Ϊ������
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