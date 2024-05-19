#include <stdio.h>

// 함수의 인자 전달 방식
// 1. call by value;
// 2. call by address;

void Swap(int a, int b) { // 값에 의한 호출 
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