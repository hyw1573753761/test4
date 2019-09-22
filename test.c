//冒泡排序
#include <stdio.h>
#include <stdlib.h>

void Swap(int* x, int* y) {
	int temp = * x;
	*x = *y;
	*y = temp;
}
//冒泡排序的参数需要设置数组的大小,因为数组作为函数的参数会隐式转换为指针,在32位系统环境下指针的大小为4个字节
BubbleSort(int arr[], int size) {
	//[0,bound]已排好区间,[bound,size]待排区间
	//初始情况下已排好区间为0,待排区间为整个数组,每趟找出一个最小值,放在数组的开头,已排好区间增加一个元素,待
	//排区间减少一个元素,当以排好区间为整个数组时,数组排序完成
	int bound = 0;
	//一共找size次就能够完成整个排序
	for (; bound < size; ++bound) {
		//具体完成最小元素的交换过程
		for (int cur = size - 1; cur > bound; --cur) {
			if (arr[cur - 1] > arr[cur]) {
				//如果两个相邻元素不满足升序要求 就交换
				Swap(&arr[cur - 1], &arr[cur]);
			}
		}
	}
}

int main() {
	int arr[4] = { 9, 5, 2, 7 };
	int size = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, size);
	for (int i = 0; i < 4; ++i) {
		printf("%d\n", arr[i]);
	}
	system("pause");
	return 0;
}