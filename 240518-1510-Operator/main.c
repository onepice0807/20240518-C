#include <stdio.h>

// 학생관리용 프로그램 제작의뢰
// 학생에 관련된 데이터?
// 학번, 이름, 나이, 전화번호
int main() {
	int no; // 학번
	char name[30]; // 이름
	int age; // 나이
	int telephoneNumber; // 전화번호

	// 학생이 한명인가?
	// 여러명의 학생 데이터를 저장하려면 어떻게 해야하는가?

	// 1. 각각의 변수를 만들고 학생의 데이터를 하나씩 저장
	int no1 = 0;
	char name1[30] = "Monster";
	int age1 = 17;
	int telephoneNumber1 = 11111111111;

	int no2 = 1;
	char name2[30];
	int age2;
	int telephoneNumber2;

	//....

	int no99 = 99;
	char name99[30];
	int age99;
	int telephoneNumber99;

	// 2. 배열을 만들고 학생의 데이터를 하나씩 저장
	int noArray[100];
	char nameArray[100][30];
	int ageArray[100];
	int telephoneNumberArray[100];

	// 배열로는 생성이 가능
	// 하지만 더 좋은방법이 존재

	// 서로 연관성이 있는 데이터를 하나로 묶어서 새로운 데이터 타입을 생성해주는 기능이 있다.
	// 이것을 구조체라고 한다

	// struct 구조체명{
    //   연관성있는 데이터들;
    // };


	struct Student { // 학생과 연관성이 있는 데이터를 하나로 묶어서 struct Student라는 구조체형
					 // 데이터 타입을 만듦, 사용자 정의 데이타 타입
		int no; // 구조체 멤버
		char name[30]; // 구조체 멤버
		int age;
		int telephoneNumber;
	};


	struct Student a; // 구조체 struct Student형 변수 a를 생성

	// 구조체형 변수로 구조체 멤버에 접근을 하려면 .(period)연산자를 사용합니다.
	a.no = 1;
	a.name[0] = 'M';
	a.name[1] = 'O';
	a.name[2] = 'N';
	a.name[3] = '\0';

	a.age = 18;
	a.telephoneNumber = 11111111;

	printf("학번 %d\n", a.no);
	printf("이름 %s\n", a.name);
	printf("나이 %d\n", a.age);
	printf("전화번호 %d\n", a.telephoneNumber);

	struct Student stArray[100]; // struct Student 데이터 타입 100개 저장하는 배열을 생성

	return 0;
}