#include <stdio.h>

// �Ϲ������� �Լ��� ���� �ϳ��� ������ ���� �ִ�.

// ���� ������ ���� �ؾ� �Ҷ�

// ����ü ���
struct Ret {
	int addValue;
	int subValue;
	int mulValue;
	float divValue;
};

struct Ret AllCalculate(int a, int b) {
	struct Ret ret; // ����ü ����

	ret.addValue = a + b;
	ret.subValue = a - b;
	ret.mulValue = a * b;
	ret.divValue = a / (float)b;

	return ret;
}

// ������ ��� 
void pAllCalculate(int a, int b, int* paddValue, int* psubValue, 
	int* pmulValue, float* pdivValue) {

	*paddValue = a + b;
	*psubValue = a - b;
	*pmulValue = a * b;
	*pdivValue = a / (float)b;
}

int main() {
	
	int a = 20;
	int b = 30;

	int* pa = &a;
	int* pb = &b;

	printf("����ü ���\n");
	struct Ret ret = AllCalculate(a, b);
	printf("%d + %d = %d\n", a, b, ret.addValue);
	printf("%d - %d = %d\n", a, b, ret.subValue);
	printf("%d x %d = %d\n", a, b, ret.mulValue);
	printf("%d / %d = %f\n", a, b, ret.divValue);

	// ������ �̿�
	printf("����ü ���\n");
	int addValue;
	int subValue;
	int mulValue;
	float divValue;
	pAllCalculate(a, b, &addValue, &subValue, &mulValue, &divValue);

	printf("%d + %d = %d\n", a, b, addValue);
	printf("%d - %d = %d\n", a, b, subValue);
	printf("%d x %d = %d\n", a, b, mulValue);
	printf("%d / %d = %f\n", a, b, divValue);

	return 0;
}