#pragma once

template<class T>
class MyTree{ //������һ�������������ڵ㣩
	T data; // ����
	MyTree* pParent; // ָ�򸸽ڵ�
	MyTree* pBrother; // ָ���һ���ֵܽ��
	MyTree* pChild; // ָ���ӽ��

public:
	MyTree(); // ���캯��
	~MyTree(); // �����������漰����ɾ��

	/*
		1����Ϊ��С�ֵ�
		2����Ϊ��С�ĺ���
		׷�ӵ����
	*/
	void insertNode(const T& data,bool isChild = true);

	//����������
	void travel();
	// �������ҽ�㲢���ص�ַ���Ҳ�������NULL
	MyTree* getNodePos(const T& data); 

	// ɾ�����
	bool deleteNode(const T& data);
};
/* ɾ�����
	tips:
	���ɾ��������pd�Ǻ��Ӳ������ֵ�
	��ôpd�ĺ��ӹ��ֵ�����
	pd�ĵ�һ���ֵܳ�Ϊpd���׵ĺ���
	���ɾ��������pd�Ǻ��Ӳ���psû���ֵܣ�pd�ĺ��ӹ�pd�ĸ�������
*/
template<class T>
bool MyTree<T>::deleteNode(const T& data){
	// ָ��Ҫɾ���Ľ��
	MyTree* pDlete = getNodePos(data);
	if (NULL == data){
		return;
	}
	// ָ��Ҫɾ���Ľ��ĸ����
	MyTree* pDelParent = pDlete->pParent;
	if (NULL == pDelParent){ // �ж��Ƿ�Ϊ����㣬�ٶ������ɾ��
		// ���ڵ�û�п��ڴ棬ֻ��Ҫ���Ǽ���
		if (pDlete->pBrother){ // ���ֵܣ������ֵܸ���
			// û�ֵܾ��ú��Ӹ���

			if (this->pChild){
				// ���Ҫɾ���Ľ����ֵ��к��ӣ�Ӧ�ó�Ϊ��С�ĺ���
				pDlete->pBrother->pChild = this->pChild;
				this->pChild->pParent = pDlete->pBrother->pBrother;
			}
			this->data = this->pBrother->data;
			this->pBrother = pDelParent->pBrother;
			this->pChild = pDlete->pBrother->pChild;
		}
	}
	if (){//Ҫɾ���Ľ�����ϴ󣬸��׵ĺ���ָ��ָ����
		// �ϴ����ֵ�
		
		// �ϴ�û�ֵ�
	}
	else{//Ҫɾ���Ľ�㲻���ϴ�

	}
}


// �������ҽ�㲢���ص�ַ���Ҳ�������NULL
template<class T>
MyTree<T>* MyTree<T>::getNodePos(const T& data){
	MyTree* pTempChild = this;
	MyTree* pTempBrother = NULL;
	//pTempChild = pChild;
	//printf("%d ",data);
	while (pTempChild){
		// �����ߣ���ǰ�����ֵ�ҲҪ��ӡ
		pTempBrother = pTempChild;
		while (pTempBrother){
			if (data == pTempBrother->data){
				return pTempBrother;
			}
			pTempBrother = pTempBrother->pBrother;
		}
		// ������
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
		// �����ߣ���ǰ�����ֵ�ҲҪ��ӡ
		pTempBrother = pTempChild;
		while (pTempBrother){
			printf("%d ",pTempBrother->data);
			pTempBrother = pTempBrother->pBrother;
		}
		printf("\n");
		// ������
		pTempChild = pTempChild->pChild;
	}
}
/*
1����Ϊ��С�ֵ�
2����Ϊ��С�ĺ���
׷�ӵ����
*/
template<class T>
void MyTree<T>::insertNode(const T& data, bool isChild){
	// 1�������½��
	MyTree* pNew = new  MyTree;
	memset(pNew,0,sizeof(MyTree));
	pNew->data = data;

	// 2 ��ʱָ��ָ��ǰ��С�ĺ���
	MyTree* pTemp = this; // ָ��ǰ��㣬����ָ��ǰ�����ֵܻ��ߺ���
	while (pTemp->pChild){
		pTemp = pTemp->pChild;
	}
	if (isChild){ // ��Ϊ��С���ӵĺ���
		pTemp->pChild = pNew;
		pNew->pParent = pTemp;
	}else{ // ��Ϊ��С���ӵ���С�ֵ�
		// ���ֵ�
		while (pTemp->pBrother){
			pTemp = pTemp->pBrother;
		}
		pTemp->pBrother = pNew;
		pNew->pParent = pTemp->pParent;
	}
}

// ������
template<class T>
MyTree<T>::MyTree(){
	pParent = pBrother = pChild = NULL;
}

// ������
template<class T>
MyTree<T>::~MyTree(){
	pParent = pBrother = pChild = NULL;
}