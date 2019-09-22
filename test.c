//ð������
#include <stdio.h>
#include <stdlib.h>

void Swap(int* x, int* y) {
	int temp = * x;
	*x = *y;
	*y = temp;
}
//ð������Ĳ�����Ҫ��������Ĵ�С,��Ϊ������Ϊ�����Ĳ�������ʽת��Ϊָ��,��32λϵͳ������ָ��Ĵ�СΪ4���ֽ�
BubbleSort(int arr[], int size) {
	//[0,bound]���ź�����,[bound,size]��������
	//��ʼ��������ź�����Ϊ0,��������Ϊ��������,ÿ���ҳ�һ����Сֵ,��������Ŀ�ͷ,���ź���������һ��Ԫ��,��
	//���������һ��Ԫ��,�����ź�����Ϊ��������ʱ,�����������
	int bound = 0;
	//һ����size�ξ��ܹ������������
	for (; bound < size; ++bound) {
		//���������СԪ�صĽ�������
		for (int cur = size - 1; cur > bound; --cur) {
			if (arr[cur - 1] > arr[cur]) {
				//�����������Ԫ�ز���������Ҫ�� �ͽ���
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