#include <stdio.h>

// 일반적으로 함수는 값을 하나만 리턴할 수가 있다.

// 값을 여러개 리턴 해야 할때

// 구조체 사용
struct Ret {
	int addValue;
	int subValue;
	int mulValue;
	float divValue;
};

struct Ret AllCalculate(int a, int b) {
	struct Ret ret; // 구조체 변수

	ret.addValue = a + b;
	ret.subValue = a - b;
	ret.mulValue = a * b;
	ret.divValue = a / (float)b;

	return ret;
}

// 포인터 사용 
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

	printf("구조체 사용\n");
	struct Ret ret = AllCalculate(a, b);
	printf("%d + %d = %d\n", a, b, ret.addValue);
	printf("%d - %d = %d\n", a, b, ret.subValue);
	printf("%d x %d = %d\n", a, b, ret.mulValue);
	printf("%d / %d = %f\n", a, b, ret.divValue);

	// 포인터 이용
	printf("구조체 사용\n");
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