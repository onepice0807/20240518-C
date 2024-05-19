#include <stdio.h>

// 변수의 종류
// 변수는 생성위치나 사용되는 키워드에 따라 다르다
// 접근범위, 존속기간

int global = 200; // 외부변수, 전역변수

int setScore(int value) {  // 매개변수 : 로컬변수, 자동변수
	 static int score = 0; // 변수앞에 static라는 키워드를 붙이면 변수의 성격이 전환됨
				           // 로컬변수, 정적변수
						   // 정적변수 : 함수가 호출될 때 한 번만들어지면서 초기화되고
						   // 함수의 블러기 닫혀도 정적변수의 공간은 계속 유지된다.
						   // 프로그램이 실행되는 동안 계속 공간이 유지된다.

	score += value;

	return score;
}


int main() {
	int a = 20; // 지역변수(로컬변수), 자동변수

	{
		int a; // 지역변수(로컬변수), 자동변수
		int b;

		// float b; // 같은 중괄호 블럭 안에는 동일한 이름의 변수가 있을 수 없다.

		b = 200;

		a = 100;
	}

	// b = 200;

	global = 200;

	for (int i = 0; i < 10; i++) {
		setScore(i);
	}

	int sum = setScore(0);
	printf("sum = %d\n", sum);

	return 0;
}