#include <stdio.h>

int main() {
	// �����͸� ����ؼ� double�� ���� 8byte ������ int�� 2�� �����ϴ� �������� ���
	double d = 3.4;

	int* pa = (int*)&d;
	int* pb = pa + 1;

	*pa = 123;
	*pb = 456;

	printf("d = %lf\n", d);
	printf("*pa = %d, *pb = %d\n", *pa, *pb);

 
	return 0;
}