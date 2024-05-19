#include <stdio.h>

// �Լ��� ���� ���� ���
// 1. call by value;
// 2. call by address;

void Swap(int a, int b) { // ���� ���� ȣ�� 
	int temp = 0;

	temp = a;
	a = b;
	b = temp;
}

void pSwap(int* pa, int* pb) {
	int temp = 0;

	temp = *pa;
	*pa = *pb;
	*pb = temp;
}

int main() {
	int a = 20;
	int b = 30;

	printf("before Swap a = %d, b = %d\n", a, b);
	Swap(a, b);
	printf("after Swap a = %d, b = %d\n", a, b);
	printf("\n");

	printf("before pSwap a = %d, b = %d\n", a, b);
	Swap(a, b);
	printf("after pSwap a = %d, b = %d\n", a, b);
	printf("\n");


	return 0;
}