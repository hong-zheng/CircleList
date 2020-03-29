#define _CRT_SRCURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

void print(int* arr, int len){
	for (int i = 0; i < len; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}
//void insertSort(int arr[],int len){
//	if (NULL ==  arr){
//		return;
//	}
//	if (0 == len){
//		return;
//	}
//	for (int i = 1; i < len;i++){
//		if (arr[i] < arr[i-1]){
//			int j = 0;
//			int tmp = arr[i];
//			for (j = i - 1; j >= 0 && arr[j] > tmp;j--){
//				arr[j + 1] = arr[j];
//			}
//			arr[j + 1] = tmp;
//		}
//	}
//}
//void shellSort(int arr[],int length){
//	if (NULL == arr){
//		return;
//	}
//	if (0 == length){
//		return;
//	}
//	// 定义步长
//	int step = length / 2;
//	// 循环步长
//	while (step>=1){
//		for (int k = step; k < length;k++){
//			for (int i = 1; i < length;i++){
//				if (arr[i] < arr[i-1]){
//					int j = 0;
//					int tmp = arr[i];
//					for (j = i - step; j >= 0 && arr[j] > tmp;j-=step){
//						arr[j + step] = arr[j];
//					}
//					arr[j+step] = tmp;
//				}
//			}
//		}
//		step /= 2;
//	}
////}
//int main(void){
//	int arr[] = { 35, 2, 4, 75, 6, 45, 34, 23, 2, 6 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	print(arr, len);
//	//shellSort(arr, len);
//	print(arr, len);
//	system("pause");
//	return 0;
//}


//希尔排序
//void shellSort(int arr[], int length){
//	if (NULL == arr){
//		return;
//	}
//	if (0 == length){
//		return;
//	}
//	// 1、定义步长,初始化为原数组长度的一半
//	int step = length / 2;
//	// 2、循环步长，只要步长达到1，就说明已经达到最后排序标准，每排一次序，步长/2
//	while (step >= 1){
//		// 3、当前步长情况下需要分的组数，根据组数进行循环
//		for (int k = step; k < length; k++){
//			// 4、循环其中的每一个数据
//			for (int i = 1; i < length; i++){
//				// 5、比较相邻两个数据之间的大小
//				if (arr[i] < arr[i - 1]){
//					int j = 0;
//					// 6、记录当前数据大小，便于后期插入
//					int tmp = arr[i];
//					// 7、对改组的数据进行插入排序
//					for (j = i - step; j >= 0 && arr[j] > tmp; j -= step){
//						arr[j + step] = arr[j];
//					}
//					// 8、插入数据
//					arr[j + step] = tmp;
//				}
//			}
//		}
//		// 9、改变step，步长，每一次减少一半，直到步长为1
//		step /= 2;
//	}
//}

//void bubble_sort(int arr[], int length){
//	if (NULL == arr){
//		return;
//	}
//	if (0 == length){
//		return;
//	}
//	// 1、外层循环，每走一次就将数组减短，使得末尾数组不再参与比较
//	for (int i = 0; i < length - 1; i++){
//		// 2、内层循环，每走一次就确定数组中最后一个数
//		for (int j = 0; j < length - i - 1; j++){
//			//3、比较相邻两个数之间的大小，满足关系走进if
//			if (arr[j + 1] < arr[j]){
//				// 4、定义临时变量进行交换
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//void insert_sort(int arr[], int length){
//	if (NULL == arr){
//		printf("无该数组\n");
//		return;
//	}
//	if (0 == length){
//		printf("数组中无元素\n");
//		return;
//	}
//	// 1、从下标为1的元素开始计数,因为比较至少得有两个数据
//	for (int i = 1; i < length; i++){
//		// 2、比较，如果当前数据小于前一个，则需要操作原数组
//		if (arr[i] < arr[i - 1]){
//			//3、记录需要操作的原数组 
//			int j = 0;
//			//4、记录当前元素，由于当前元素要被改动，所以需要提前记录下来
//			int tmp = arr[i];
//			// 5、移动当前元素的前一个元素直到有元素小于当前元素，否则就移动数组首位置处
//			for (j = i - 1; j >= 0 && arr[j] > tmp; j--){
//				arr[j + 1] = arr[j];
//			}
//			// 6、将需要插入的元素插入数组，由于最后又将j减1，因此此处需要+1
//			arr[j + 1] = tmp;
//		}
//	}
//}


//#include<vector>
//#include<iterator>
//#include<list>
//#include<deque>
//using std::cout;
//using std::cin;
//using std::vector;
//
//// 插入排序，将无序序列插入到有序序列之中
//// 在基本有序情况下效率最高
//// 插入排序时数据的序列比较少的情况下效率比较高
//
//
//// 排序算法(有标准的算法函数)
//// shell排序(shell发明的，插入排序的优化，是一种比较快的算法，用得最多的排序)
//
//
//
//
//// 基数排序
//// 桶排序
//
//
//
//
//
//
//
//
//
//
//
//
//
//// list 双向动态链表
//// 数组链表区别
//// 链表插入删除效率高
//// 数组连续，链表连续
//// 数组访问查询效率高
//// 不同的数据结构适用于不同的场合及其业务逻辑
//
////deque:双向的动态队列
//// 介于 链表和数组之间的容器
//// 查询低于数组高于链表，插入删除高于数组低于链表
////deque<int> deque; // 双向
//
//
////list<string> ls;
//system("pause");
//return 0;
//}
//
//int maiwn(void){
//	// vector list deque map set
//	// 容器 存储数据 有个内部类，称为迭代器iterator,迭代器用于定位，返回元素的地址，返回元素的首地址begin end(逾尾迭代器)
//	// 容器发生改变，迭代器失效
//	// 模板类，使用类模板制作一个容器对象
//	vector<int> v;  // 动态数组
//	// vector 动态数组  无序
//	v.push_back(2); // 向数组末尾添加一个元素
//	v.push_back(5); // 向数组末尾添加一个元素
//	v.push_back(4); // 向数组末尾添加一个元素
//	v.push_back(7); // 向数组末尾添加一个元素
//
//	// 查找
//	cout << v[0];
//	cout << endl;
//	cout << v.at(0);
//	cout << endl;
//
//	// 遍历
//	for (size_t i = 0; i < v.size(); i++){
//		cout << v[i] << " ";
//	}
//	cout << endl;
//	// 删除最后一个
//	v.pop_back();
//	// 遍历
//	for (size_t i = 0; i < v.size(); i++){
//		cout << v[i] << " ";
//	}
//	cout << endl;
//
//	// 删除其中的一个
//	//v.erase();
//	// 迭代器对象的返回值就是容器元素的地址
//	vector<int>::iterator it;// 创建v容器的迭代器对象
//
//	// 使用迭代器位置
//	it = v.begin(); // 迭代器指向第一个位置
//	v.insert(it, 2334); // 插入元素到某一个位置
//	it += 2;
//	v.erase(it);
//	// 遍历
//	for (size_t i = 0; i < v.size(); i++){
//		cout << v[i] << " ";
//	}
//	cout << endl;
//	// 每一次从动态数组中删除元素，都要拷贝内存段，it需要重新初始化
//	// it已经发生变化，如果容器发生改变，则迭代器失效，每次使用迭代器都要对迭代器进行初始化
//
//	for (it = v.begin(); it != v.end(); it++){
//		cout << *it << " ";
//	}
//
//	cout << endl;
//	cout << endl;
//	cout << endl;
//	cout << endl;


// 插入排序适合数据少同时在数组基本有序情况下效率最高
//void InsertSort(int arr[],int length){
//	int j = 0;
//	for (size_t i = 1; i < length;i++){
//		if (arr[i] < arr[i-1]){
//			int tmp = arr[i];
//			for (j = i - 1; j >= 0 && tmp<arr[j];j--){
//				arr[j + 1] = arr[j];
//			}
//			arr[j + 1] = tmp;
//		}
//	}
//}

//void InsertSort(int arr[], int length){
//	for (size_t i = 1; i < length;i++){
//		if (arr[i] < arr[i-1]){
//			int tmp = arr[i];
//			int j = 0;
//			for (j = i-1; j >= 0 && tmp < arr[j];j--){
//				arr[j+1] = arr[j];
//			}
//			arr[j + 1] = tmp;
//		}
//	}
//}


//void insert_sort(int arr[],int len){
//	for (int i = 1; i < len;i++){
//		if (arr[i] < arr[i-1]){
//			int j = 0;
//			int tmp = arr[i];
//			for (j = i - 1; j >= 0 && tmp < arr[j];j--){
//				arr[j + 1] = arr[j];
//			}
//			arr[j+1] = tmp;
//		}
//	}
//}

//void insert_sort(int* arr,int len){
//	for (int i = 1; i < len;i++){
//		if (arr[i] < arr[i-1]){
//			int j = 0;
//			int tmp = arr[i];
//			for (j = i - 1; j >= 0 && tmp < arr[j];j--){
//				arr[j + 1] = arr[j];
//			}
//			arr[j + 1] = tmp;
//		}
//	}
//}

//void INSERT_SORT(int* arr,int len){
//	for (int i = 1; i < len;i++){
//		if (arr[i] < arr[i-1]){
//			int j = 0;
//			int tmp = arr[i];
//			for (j = i - 1; (j >= 0) && (tmp < arr[j]); j--){
//				arr[j + 1] = arr[j];
//			}
//			arr[j + 1] = tmp;
//		}
//	}
//}

// 插入排序的实现
//void INSERT_SORT(int* arr, int len){
//	for (int i = 1; i < len;i++){
//		if (arr[i] < arr[i-1]){
//			int j = 0;
//			int tmp = arr[i];
//			for (j = i - 1; j >= 0 && arr[j] > tmp;j--){
//				arr[j + 1] = arr[j];
//			}
//			arr[j + 1] = tmp;
//		}
//	}
//}

// //希尔排序
//void shellSort(int arr[], int length){
//	// 1、计算初步长
//	int step = length / 2;
//	int tmp;
//	int j;
//	// 2、按照步长来做插入排序
//	// 每次步长减1
//	while (step >= 1){
//		for (int k = step; k < length;k++){
//			for (int i = 1; i < length; i++){
//				if (arr[i] < arr[i - 1]){
//					j = 0;
//					tmp = arr[i];
//					for (j = i - step; j >= 0 && arr[j] > tmp; j -= step){
//						arr[j + step] = arr[j];
//					}
//					arr[j + step] = tmp;
//				}
//			}
//		}
//		step = step / 2;
//	}
//}

// 希尔排序真的难，，，只能硬记住先
//void shellSort(int arr[],int len){
//	int step = len / 2;
//	while (step >=1){
//		for (int k = step; k < len;k++){
//			for (int i = 1; i < len;i++){
//				if (arr[i] < arr[i-1]){
//					int j = 0;
//					int tmp = arr[i];
//					for (j = i - step; j >= 0 && arr[j] > tmp; j -= step){
//						arr[j + step] = arr[j];
//					}
//					arr[j + step] = tmp;
//				}
//			}
//
//		}
//		step /= 2;
//	}
//}
//
//void shellSort(int arr[], int len){
//	int step=len;
//	while (step>=1){
//		for (int k = step; k < len;k++){
//			for (int i = 1; i < len;i++){
//				if (arr[i] < arr[i-1]){
//					int tmp = arr[i];
//					int j = 0;
//					for (j = i - step; j >= 0 && arr[j] > tmp; j -= step){
//						arr[j + step] = arr[j];
//					}
//					arr[j + step] = tmp;
//				}
//			}
//		}
//		step /= 2;
//	}
//}
//void shellSort(int arr[], int len){
//	int step = len/2;
//	int j = 0;
//	int tmp = 0;
//	while (step >= 1){
//		for (int k = step; k < len;k++){
//			for (int i = 1; i < len;i++){
//				if (arr[i] < arr[i-1]){
//					j = 0;
//					tmp = arr[i];
//					for (j = i - step; j >= 0 && arr[j] > tmp;j-=step){
//						arr[j + step] = arr[j];
//					}
//					arr[j + step] = tmp;
//				}
//			}
//		}
//		step /= 2;
//	}
//}
//void shellSort(int arr[], int length){
//	// 1、计算初步长
//	int step = length / 2;
//	int tmp;
//	int j;
//	// 2、按照步长来做插入排序
//	// 每次步长减1
//	while (step >= 1){
//		for (int k = step; k < length;k++){
//			for (int i = 1; i < length; i++){
//				if (arr[i] < arr[i - 1]){
//					j = 0;
//					tmp = arr[i];
//					for (j = i - step; j >= 0 && arr[j] > tmp; j -= step){
//						arr[j + step] = arr[j];
//					}
//					arr[j + step] = tmp;
//				}
//			}
//		}
//		step = step / 2;
//	}
//}
// 插入排序
//void insert_sort(int arr[],int length){
//	for (int i = 1; i < length; i++){
//		if (arr[i] < arr[i-1]){
//			int j = 0;
//			int tmp = arr[i];
//			for (j = i - 1; j >= 0 && arr[j] > tmp;j--){
//				arr[j + 1] = arr[j];
//			}
//			arr[j + 1] = tmp;
//		}
//	}
//}

// 插入排序
//void insert_sort(int arr[],int len){
//	for (int i = 1; i < len;i++){
//		if (arr[i] < arr[i-1] ){
//			int j = 0;
//			int tmp = arr[i];
//			for (j = i - 1; j >= 0 && arr[j] > tmp;j--){
//				arr[j + 1] = arr[j];
//			}
//			arr[j + 1] = tmp;
//		}
//	}
//}
//
//void shellSort(int arr[], int length){
//	int step = length / 2;
//	while (step>=1){
//		for (int k = step; k < length;k++){
//			for (int i = 1; i < length;i++){
//				if (arr[i] < arr[i-1]){
//					int j = 0;
//					int tmp = arr[i];
//					for (j = i - step; j >= 0 && arr[j] >  tmp;j-=step){
//						arr[j + step] = arr[j];
//					}
//					arr[j + step] = tmp;
//				}
//			}
//		}
//		step /= 2;
//	}
//}

//void insert_sort(int arr[],int length){
//	for (int i = 1; i < length;i++){
//		if (arr[i] < arr[i-1]){
//			int j = 0;
//			int tmp = arr[i];
//			for (j = i - 1; j >= 0 && arr[j] > tmp; j--){
//				arr[j + 1] = arr[j];
//			}
//			arr[j + 1] = tmp;
//		}
//	}
//}

//void shellSort(int arr[], int length){
//	int step = length / 2;
//	while (step>=1){
//		for (int k = step; k < length;k++){
//			for (int i = 1; i < length;i++){
//				if (arr[i] < arr[i-1]){
//					int j = 0;
//					int tmp = arr[i];
//					for (j = i - step; j >= 0 && arr[j] > tmp;j-=step){
//						arr[j + step] = arr[j];
//					}
//					arr[j + step] = tmp;
//				}
//			}
//		}
//		step /= 2;
//	}
//}
