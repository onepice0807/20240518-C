#include <stdio.h>

int main() {
	float array[100];

	// 배열명은 첫번째 요소의 주소값
	// array의 DataType은?

	float* parray = array;

	float array2[] = { 1.2f, 3.4f, 10.3f, 7.5f, 11.4f, 100.5f };

	int length = sizeof(array2) / sizeof(array2[0]);
	// 배열요소의 갯수 = 배열의 전체 바이트 수 / 배열의 요소의 바이트 수
	// sizeof(배열명) => 배열의 전체 바이트 수
	// sizeof(요소) => 요소의 바이트 수

	for (int i = 0; i < length; i++) {
		printf("array2[%d] = %f\n", i, array2[i]);
	}

	return 0;
}