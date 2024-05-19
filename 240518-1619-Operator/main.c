#include <stdio.h>

// 1. 동일한 명령어들이 반복적으로 나올때
// 명령어를 하나로 묶어서 하나의 단위로 만들어주는 기능이 있다.
// 2. 유용한 코드를 하나로 묶을때
// 함수(Function)라고 합니다

// returnType 함수명(매개변수){
//		명령어들;
// };

// returnType은 묶어놓은 명령어를 처리하고 어떤 데이터 타입을 결과값을
// 돌려주는지 알려주는 역할을 한다
// return문은 함수 내부에 값을 함수 외부로 전달하는 역할을 합니다.
// return 값이 없는 경우에는 void라고 쓰면된다

void PrintMonster5() {
	printf("Monster\n");
	printf("Monster\n");
	printf("Monster\n");
	printf("Monster\n");
	printf("Monster\n");
}

void PrintMonster4() {
	printf("Monster\n");
	printf("Monster\n");
	printf("Monster\n");
	printf("Monster\n");
}


void PrintMonster3() {
	printf("Monster\n");
	printf("Monster\n");
	printf("Monster\n");
}


// 함수 사용의 장점
// 1. 가독성.
// 2. 모듈성.
// 3. 재사용성.

void PrintMonster(int count) {
	for (int i = 0; i < count; i++) {
		printf("Monster\n");
	}
}

// returntype : int
// 매개변수 : int 값 3개를 받음.
int add(int a, int b, int c) {
	int temp = 0;
	temp = a + b + c;

	return temp;
}

int main() {
	
	//PrintMonster5를 사용해 Monster 문자열 5번 출력
	PrintMonster5();

	//PrintMonster를 사용해 Monster 문자열 5번 출력
	PrintMonster(5);

	/// ....

	// Monster 문자열 3번 출력
	PrintMonster(3);

	/// ....

	// Monster 문자열 2번 출력
	PrintMonster(2);

	int a = 10;
	int b = 20;
	int c = 30;

	int ret = add(a, b, c); // 함수를 호출할 떄 전달하는 값을 인자(argument)라고 한다.
							// 인자값을 받는 변수를 매개변수(parameter)라고 한다.

	printf("%d + %d + %d = %d\n", a, b, c, ret);

	return 0;
}