#include <stdio.h>

int main() {
	// 포인터를 사용해서 double형 변수 8byte 공간을 int형 2개 저장하는 공간으로 사용
	double d = 3.4;

	int* pa = (int*)&d;
	int* pb = pa + 1;

	*pa = 123;
	*pb = 456;

	printf("d = %lf\n", d);
	printf("*pa = %d, *pb = %d\n", *pa, *pb);

 
	return 0;
}