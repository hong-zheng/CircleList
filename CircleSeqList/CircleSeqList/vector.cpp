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
//	// ���岽��
//	int step = length / 2;
//	// ѭ������
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


//ϣ������
//void shellSort(int arr[], int length){
//	if (NULL == arr){
//		return;
//	}
//	if (0 == length){
//		return;
//	}
//	// 1�����岽��,��ʼ��Ϊԭ���鳤�ȵ�һ��
//	int step = length / 2;
//	// 2��ѭ��������ֻҪ�����ﵽ1����˵���Ѿ��ﵽ��������׼��ÿ��һ���򣬲���/2
//	while (step >= 1){
//		// 3����ǰ�����������Ҫ�ֵ�������������������ѭ��
//		for (int k = step; k < length; k++){
//			// 4��ѭ�����е�ÿһ������
//			for (int i = 1; i < length; i++){
//				// 5���Ƚ�������������֮��Ĵ�С
//				if (arr[i] < arr[i - 1]){
//					int j = 0;
//					// 6����¼��ǰ���ݴ�С�����ں��ڲ���
//					int tmp = arr[i];
//					// 7���Ը�������ݽ��в�������
//					for (j = i - step; j >= 0 && arr[j] > tmp; j -= step){
//						arr[j + step] = arr[j];
//					}
//					// 8����������
//					arr[j + step] = tmp;
//				}
//			}
//		}
//		// 9���ı�step��������ÿһ�μ���һ�룬ֱ������Ϊ1
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
//	// 1�����ѭ����ÿ��һ�ξͽ�������̣�ʹ��ĩβ���鲻�ٲ���Ƚ�
//	for (int i = 0; i < length - 1; i++){
//		// 2���ڲ�ѭ����ÿ��һ�ξ�ȷ�����������һ����
//		for (int j = 0; j < length - i - 1; j++){
//			//3���Ƚ�����������֮��Ĵ�С�������ϵ�߽�if
//			if (arr[j + 1] < arr[j]){
//				// 4��������ʱ�������н���
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//void insert_sort(int arr[], int length){
//	if (NULL == arr){
//		printf("�޸�����\n");
//		return;
//	}
//	if (0 == length){
//		printf("��������Ԫ��\n");
//		return;
//	}
//	// 1�����±�Ϊ1��Ԫ�ؿ�ʼ����,��Ϊ�Ƚ����ٵ�����������
//	for (int i = 1; i < length; i++){
//		// 2���Ƚϣ������ǰ����С��ǰһ��������Ҫ����ԭ����
//		if (arr[i] < arr[i - 1]){
//			//3����¼��Ҫ������ԭ���� 
//			int j = 0;
//			//4����¼��ǰԪ�أ����ڵ�ǰԪ��Ҫ���Ķ���������Ҫ��ǰ��¼����
//			int tmp = arr[i];
//			// 5���ƶ���ǰԪ�ص�ǰһ��Ԫ��ֱ����Ԫ��С�ڵ�ǰԪ�أ�������ƶ�������λ�ô�
//			for (j = i - 1; j >= 0 && arr[j] > tmp; j--){
//				arr[j + 1] = arr[j];
//			}
//			// 6������Ҫ�����Ԫ�ز������飬��������ֽ�j��1����˴˴���Ҫ+1
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
//// �������򣬽��������в��뵽��������֮��
//// �ڻ������������Ч�����
//// ��������ʱ���ݵ����бȽ��ٵ������Ч�ʱȽϸ�
//
//
//// �����㷨(�б�׼���㷨����)
//// shell����(shell�����ģ�����������Ż�����һ�ֱȽϿ���㷨���õ���������)
//
//
//
//
//// ��������
//// Ͱ����
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
//// list ˫��̬����
//// ������������
//// �������ɾ��Ч�ʸ�
//// ������������������
//// ������ʲ�ѯЧ�ʸ�
//// ��ͬ�����ݽṹ�����ڲ�ͬ�ĳ��ϼ���ҵ���߼�
//
////deque:˫��Ķ�̬����
//// ���� ���������֮�������
//// ��ѯ�������������������ɾ�����������������
////deque<int> deque; // ˫��
//
//
////list<string> ls;
//system("pause");
//return 0;
//}
//
//int maiwn(void){
//	// vector list deque map set
//	// ���� �洢���� �и��ڲ��࣬��Ϊ������iterator,���������ڶ�λ������Ԫ�صĵ�ַ������Ԫ�ص��׵�ַbegin end(��β������)
//	// ���������ı䣬������ʧЧ
//	// ģ���࣬ʹ����ģ������һ����������
//	vector<int> v;  // ��̬����
//	// vector ��̬����  ����
//	v.push_back(2); // ������ĩβ���һ��Ԫ��
//	v.push_back(5); // ������ĩβ���һ��Ԫ��
//	v.push_back(4); // ������ĩβ���һ��Ԫ��
//	v.push_back(7); // ������ĩβ���һ��Ԫ��
//
//	// ����
//	cout << v[0];
//	cout << endl;
//	cout << v.at(0);
//	cout << endl;
//
//	// ����
//	for (size_t i = 0; i < v.size(); i++){
//		cout << v[i] << " ";
//	}
//	cout << endl;
//	// ɾ�����һ��
//	v.pop_back();
//	// ����
//	for (size_t i = 0; i < v.size(); i++){
//		cout << v[i] << " ";
//	}
//	cout << endl;
//
//	// ɾ�����е�һ��
//	//v.erase();
//	// ����������ķ���ֵ��������Ԫ�صĵ�ַ
//	vector<int>::iterator it;// ����v�����ĵ���������
//
//	// ʹ�õ�����λ��
//	it = v.begin(); // ������ָ���һ��λ��
//	v.insert(it, 2334); // ����Ԫ�ص�ĳһ��λ��
//	it += 2;
//	v.erase(it);
//	// ����
//	for (size_t i = 0; i < v.size(); i++){
//		cout << v[i] << " ";
//	}
//	cout << endl;
//	// ÿһ�δӶ�̬������ɾ��Ԫ�أ���Ҫ�����ڴ�Σ�it��Ҫ���³�ʼ��
//	// it�Ѿ������仯��������������ı䣬�������ʧЧ��ÿ��ʹ�õ�������Ҫ�Ե��������г�ʼ��
//
//	for (it = v.begin(); it != v.end(); it++){
//		cout << *it << " ";
//	}
//
//	cout << endl;
//	cout << endl;
//	cout << endl;
//	cout << endl;


// ���������ʺ�������ͬʱ������������������Ч�����
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

// ���������ʵ��
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

// //ϣ������
//void shellSort(int arr[], int length){
//	// 1�����������
//	int step = length / 2;
//	int tmp;
//	int j;
//	// 2�����ղ���������������
//	// ÿ�β�����1
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

// ϣ����������ѣ�����ֻ��Ӳ��ס��
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
//	// 1�����������
//	int step = length / 2;
//	int tmp;
//	int j;
//	// 2�����ղ���������������
//	// ÿ�β�����1
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
// ��������
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

// ��������
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
