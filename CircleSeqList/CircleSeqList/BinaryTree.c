#define _CRT_SRCURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

// STL 概述
// standard Template Library 标准模板库（已经写好，也需要实现）
// 1、容器：数据结构 来管理数据 安全->操作更好
//    变量 数组 结构体 顺序表 链表 栈 队列 、、、
//    工作中： 用标准的容器
// 2、算法


// 容器
// 系列式容器：可序式容器 数据无序
// vertor 数组
// list 双向链表
// deque 双向动态队列
// 关系式容器: 已序式容器 数据有序
//  map set
//  multimap multiset

// 容器必然有的四种功能:
// 增删改查

// 容器都有的函数：
// 构造，析构
// 插入、删除、查找、拷贝构造、元素个数、、、

// 迭代器(所有的数据结构)
// 用于定位容器中的某个元素
// 数组(下标)、链表(指针next)
// 智能指针(本质)

int misssan(void){

	system("pause");
	return 0;
}




// 二叉树结点
typedef struct BINARYNODE{
	char ch;
	struct BINARYNODE* lchild;
	struct BINARYNODE* rchild;
}BinaryNode;

// 先序递归遍历
void FrontRecursion(BinaryNode* root){
	if (NULL == root){
		return;
	}
	// 先序遍历
	// 1、先访问根结点
	printf("%c",root->ch);
	// 2、遍历左子树
	FrontRecursion(root->lchild);
	// 3、遍历右子树
	FrontRecursion(root->rchild);
}
// 二叉树的中序遍历
void CentalRecursion(BinaryNode* root){
	if (NULL == root){
		return;
	}
	CentalRecursion(root->lchild);
	printf("%c",root->ch);
	CentalRecursion(root->rchild);
}
// 二叉树的后序遍历
void BacklRecursion(BinaryNode* root){
	if (NULL == root){
		return;
	}
	BacklRecursion(root->lchild);
	BacklRecursion(root->rchild);
	printf("%c", root->ch);
}

// 求叶子结点数目(可用递归)
int num = 0;
void CaculateLeafNum(BinaryNode* root){
	if (NULL == root){
		return;
	}
	if (root->lchild == NULL && root->rchild==NULL){
		num++;
	}
	// 左子树叶子结点数
	CaculateLeafNum(root->lchild);
	// 右子树叶子结点数
	CaculateLeafNum(root->rchild);
}

// 求二叉树的深度
int CaculateTreeDepthNum(BinaryNode* root){
	if (root == NULL){
		return 0;
	}
	int l = CaculateTreeDepthNum(root->lchild);
	int r = CaculateTreeDepthNum(root->rchild);
	return (l > r) ? (l + 1) : (r + 1);
}
// 拷贝二叉树
BinaryNode* CopyBinaryTree(BinaryNode* root){
	if (NULL == root){
		return NULL;
	}
	// 递归拷贝

	// 拷贝左子树
	BinaryNode* lchild = CopyBinaryTree(root->lchild);
	// 拷贝右子树
	BinaryNode* rchild = CopyBinaryTree(root->rchild);
	// 创建结点
	BinaryNode* newnode = (BinaryNode*)malloc(sizeof(BinaryNode));
	newnode->ch = root->ch;
	newnode->lchild = lchild;
	newnode->rchild = rchild;
	return newnode;
}

// 释放二叉树
void FreeSpaceBinaryTree(BinaryNode* root){
	if (NULL == root){
		return;
	}
	// 释放左子树
	FreeSpaceBinaryTree(root->lchild);
	// 释放右子树
	FreeSpaceBinaryTree(root->rchild);
	free(root);
}
void CreateBinaryTree(){
	//创建结点
	BinaryNode nodeA = { 'A', NULL, NULL };
	BinaryNode nodeB = { 'B', NULL, NULL };
	BinaryNode nodeC = { 'C', NULL, NULL };
	BinaryNode nodeD = { 'D', NULL, NULL };
	BinaryNode nodeE = { 'E', NULL, NULL };
	BinaryNode nodeF = { 'F', NULL, NULL };
	BinaryNode nodeG = { 'G', NULL, NULL };
	BinaryNode nodeH = { 'H', NULL, NULL };
	// 建立结点关系
	nodeA.lchild = &nodeB;
	nodeA.rchild = &nodeF;
	nodeB.rchild = &nodeC;
	nodeC.lchild = &nodeD;
	nodeC.rchild = &nodeE;
	nodeF.rchild = &nodeG;
	nodeG.lchild = &nodeH;
	BacklRecursion(&nodeA);
	// 先序遍历
	//FrontRecursion(&nodeA);
	//CentalRecursion(&nodeA);
	//BacklRecursion(&nodeA);
	//CaculateLeafNum(&nodeA);
	//printf("叶子结点数:%d\n",num);
	//printf("树的深度:%d\n", CaculateTreeDepthNum(&nodeA));
	BinaryNode* tree = CopyBinaryTree(&nodeA);
	printf("\n");
	BacklRecursion(tree);

	// 释放拷贝的树
	//FreeSpaceBinaryTree(tree);
}


int mainw(void){
	CreateBinaryTree();
	printf("\n");
	system("pause");
	return 0;
}