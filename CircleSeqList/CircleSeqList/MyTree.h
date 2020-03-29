#pragma once

template<class T>
class MyTree{ //可描述一个结点的树（根节点）
	T data; // 数据
	MyTree* pParent; // 指向父节点
	MyTree* pBrother; // 指向第一个兄弟结点
	MyTree* pChild; // 指向孩子结点

public:
	MyTree(); // 构造函数
	~MyTree(); // 析构函数，涉及树的删除

	/*
		1、成为最小兄弟
		2、成为最小的孩子
		追加到最后
	*/
	void insertNode(const T& data,bool isChild = true);

	//遍历整棵树
	void travel();
	// 在树中找结点并返回地址，找不到返回NULL
	MyTree* getNodePos(const T& data); 

	// 删除结点
	bool deleteNode(const T& data);
};
/* 删除结点
	tips:
	如果删除的子树pd是孩子并且有兄弟
	那么pd的孩子归兄弟领养
	pd的第一个兄弟成为pd父亲的孩子
	如果删除的子树pd是孩子并且ps没有兄弟，pd的孩子归pd的父亲领养
*/
template<class T>
bool MyTree<T>::deleteNode(const T& data){
	// 指向要删除的结点
	MyTree* pDlete = getNodePos(data);
	if (NULL == data){
		return;
	}
	// 指向要删除的结点的父结点
	MyTree* pDelParent = pDlete->pParent;
	if (NULL == pDelParent){ // 判断是否为根结点，再对其进行删除
		// 根节点没有开内存，只需要覆盖即可
		if (pDlete->pBrother){ // 有兄弟，就用兄弟覆盖
			// 没兄弟就用孩子覆盖

			if (this->pChild){
				// 如果要删除的结点的兄弟有孩子，应该成为最小的孩子
				pDlete->pBrother->pChild = this->pChild;
				this->pChild->pParent = pDlete->pBrother->pBrother;
			}
			this->data = this->pBrother->data;
			this->pBrother = pDelParent->pBrother;
			this->pChild = pDlete->pBrother->pChild;
		}
	}
	if (){//要删除的结点是老大，父亲的孩子指针指向它
		// 老大有兄弟
		
		// 老大没兄弟
	}
	else{//要删除的结点不是老大

	}
}


// 在树中找结点并返回地址，找不到返回NULL
template<class T>
MyTree<T>* MyTree<T>::getNodePos(const T& data){
	MyTree* pTempChild = this;
	MyTree* pTempBrother = NULL;
	//pTempChild = pChild;
	//printf("%d ",data);
	while (pTempChild){
		// 向右走，当前层有兄弟也要打印
		pTempBrother = pTempChild;
		while (pTempBrother){
			if (data == pTempBrother->data){
				return pTempBrother;
			}
			pTempBrother = pTempBrother->pBrother;
		}
		// 向下走
		pTempChild = pTempChild->pChild;
	}
	return NULL;
}

template<class T>
void MyTree<T>::travel(){
	MyTree* pTempChild = this;
	MyTree* pTempBrother = NULL;
	//pTempChild = pChild;
	//printf("%d ",data);
	while (pTempChild){
		// 向右走，当前层有兄弟也要打印
		pTempBrother = pTempChild;
		while (pTempBrother){
			printf("%d ",pTempBrother->data);
			pTempBrother = pTempBrother->pBrother;
		}
		printf("\n");
		// 向下走
		pTempChild = pTempChild->pChild;
	}
}
/*
1、成为最小兄弟
2、成为最小的孩子
追加到最后
*/
template<class T>
void MyTree<T>::insertNode(const T& data, bool isChild){
	// 1、创建新结点
	MyTree* pNew = new  MyTree;
	memset(pNew,0,sizeof(MyTree));
	pNew->data = data;

	// 2 临时指针指向当前最小的孩子
	MyTree* pTemp = this; // 指向当前结点，不能指向当前结点的兄弟或者孩子
	while (pTemp->pChild){
		pTemp = pTemp->pChild;
	}
	if (isChild){ // 成为最小孩子的孩子
		pTemp->pChild = pNew;
		pNew->pParent = pTemp;
	}else{ // 成为最小孩子的最小兄弟
		// 找兄弟
		while (pTemp->pBrother){
			pTemp = pTemp->pBrother;
		}
		pTemp->pBrother = pNew;
		pNew->pParent = pTemp->pParent;
	}
}

// 构造器
template<class T>
MyTree<T>::MyTree(){
	pParent = pBrother = pChild = NULL;
}

// 析构器
template<class T>
MyTree<T>::~MyTree(){
	pParent = pBrother = pChild = NULL;
}