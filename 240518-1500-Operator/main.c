#include <stdio.h>

int main() {
	float array[100];

	// �迭���� ù��° ����� �ּҰ�
	// array�� DataType��?

	float* parray = array;

	float array2[] = { 1.2f, 3.4f, 10.3f, 7.5f, 11.4f, 100.5f };

	int length = sizeof(array2) / sizeof(array2[0]);
	// �迭����� ���� = �迭�� ��ü ����Ʈ �� / �迭�� ����� ����Ʈ ��
	// sizeof(�迭��) => �迭�� ��ü ����Ʈ ��
	// sizeof(���) => ����� ����Ʈ ��

	for (int i = 0; i < length; i++) {
		printf("array2[%d] = %f\n", i, array2[i]);
	}

	return 0;
}