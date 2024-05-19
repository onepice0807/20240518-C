#include <stdio.h>

typedef struct tagStudent {
	char name[30];
	int age;
	int stNo;

	struct tagStudent* Prev;
	struct tagStudent* Next;
} Student;

int main() {
	Student st1 = { "Monster1", 19, 123, NULL };
	Student st2 = { "Monster2", 20, 1235, NULL };
	Student st3 = { "Monster3", 22, 1286, NULL };
	Student st4 = { "Monster4", 18, 1237, NULL };

	st1.Next = &st2;
	st2.Prev = &st1;
	st2.Next = &st3;
	st3.Prev = &st2;
	st3.Next = &st4;
	st4.Prev = &st3;

	(&st1)->age = 20;
	// 구조체 변수의 주소값으로 구조체 변수의 멤버에 접근할때는 ->(화살표)연산자을 사용

	printf("이름: %s\n", st1.Next->Next->Next->name);
	printf("나이: %d\n", st1.Next->Next->Next->age);
	printf("학번: %d\n", st1.Next->Next->Next->stNo);

	// 문제
	// st1 변수로 st3의 멤버에 접근해서 나이 기존나이에 3살을 더해서 저장
	// 기존 학번에 10을 추가해서 저장하고 저장된 값을 출력

	printf("\n");
	st1.Next->Next->age += 3;
	st1.Next->Next->stNo += 10;
	printf("나이: %d\n", st1.Next->Next->age);
	printf("학번: %d\n", st1.Next->Next->stNo);

	// 문제
	// st4 변수로 st2의 멤버에 접근해서 나이 기존나이에 3살을 더해서 저장
	// 기존 학번에 10을 추가해서 저장하고 저장된 값을 출력
	printf("\n");
	st4.Prev->Prev->age += 3;
	st4.Prev->Prev->stNo += 10;
	printf("나이: %d\n", st4.Prev->Prev->age);
	printf("학번: %d\n", st4.Prev->Prev->stNo);


	return 0;
}