#define _CRT_SRCURE_NO_WARNINGS 1
#include<iostream>
#include "MyTree.h"
using namespace std;
void gechao_sort(int arr[], int len, int max){
	// 鸽巢排序
	// 创建临时数组存放数据,大小为(max+1)
	int* tmp = (int*)malloc((max + 1)*sizeof(int));
	memset(tmp, 0, (max + 1)*sizeof(int));
	for (int i = 0; i < len; i++){
		tmp[arr[i]]++;
	}
	// 将数组中有元素的地方的下标打印出来
	for (int i = 0; i < max + 1; i++){
		while (tmp[i]){
			printf("%d ", i);
			tmp[i]--;
		}
	}
}
// 高内聚低耦合
int main(void){
	// 不可以出现负数或者小数
	// 需要用到临时数组放元素取元素
	int arr[] = { 48, 7, 92, 1, 6, 38, 7, 2, 3, 67, 6, 51, 1, 30, 8 };
	int len = sizeof(arr) / sizeof(arr[0]);
	int max = arr[0];
	for (int i = 1; i < len; i++){
		if (max < arr[i]){
			max = arr[i];
		}
	}
	gechao_sort(arr, len, max);
	system("pause");
	return 0;
}
// 不带头单向非循环链表：作为其它数据结构底层实现
// 带头结点双向循环链表



// 基数排序，利用下标有序性
void radix_sort(int* arr,int length,int max){

}

void insert_sort(int arr[],int len){
	for (int i = 1; i < len;i++){
		if (arr[i] < arr[i-1] ){
			int j = 0;
			int tmp = arr[i];
			for (j = i - 1; j >= 0 && tmp < arr[j];j--){
				arr[j + 1] = arr[j];
			}
			arr[j + 1] = tmp;
		}
	}
}
void Print(int* arr,int len){
	for (int i = 0; i < len;i++){
		printf("%d ",arr[i]);
	}

	printf("\n");
}
void shellSort(int arr[],int len){
	int step = len / 2;
	while (step >= 1){
		for (int k = step; k < len;k++){
			for (int i = 1; i < len;i++){
				if (arr[i] < arr[i-1]){
					int j = 0;
					int tmp = arr[i];
					for (j = i - step; j >= 0 && arr[j] > tmp;j-=step){
						arr[j + step] = arr[j];
					}
					arr[j + step] = tmp;
				}
			}
		}
		step /= 2;
	}
}
void rotate1(int* nums, int numsSize, int k){
	for (int i = 0; i < k; i++){
		int num = nums[numsSize - 1];
		for (int j = numsSize - 2; j >= 0; j--){
			nums[j + 1] = nums[j];
		}
		nums[0] = num;
	}
}
// 1 2 3 4
void rotate(int arr[],int size,int k){
	for (int i = 0; i < k;i++){
		int num = arr[size-1];
		for (int j = size - 2; j >= 0; j--){
			arr[j+1] = arr[j];
		}
		arr[0] = num;
	}
}




int mainq(){
	MyTree<int> tree;
	tree.insertNode(1,false);
	tree.insertNode(2, false);
	tree.insertNode(3);
	tree.insertNode(4);
	tree.insertNode(5, false);
	tree.insertNode(6, false);
	tree.insertNode(7);
	tree.insertNode(8, false);
	tree.insertNode(9);
	tree.insertNode(10, false);
	tree.travel();
	printf("===========\n");
	MyTree<int>* t = tree.getNodePos(2);
	system("pause");
	return 0;
}