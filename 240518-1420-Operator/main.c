#include <stdio.h>

int main() {
	int a = 20;
	float b = 1.2f;
	
	int* pa = &a;
	float* pb = &b;

	pa = (int*)&b;

	*pa = 100;

	printf("*pa = %d\n", *pa);
	printf("b = %.40f\n", b);

	pb = (float*)&a; // int* -> float*
	*pb = 1.4f;
	printf("*pb = %f\n", *pb);

	pb = (float*)pa;   // int* -> float*
	printf("*pb = %f\n", *pb);


	return 0;
}