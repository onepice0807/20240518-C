#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct tagMonster {
	char name[20];
	int health;
	int attack;
	int defense;
} Monster;

// typedef struct tagMonster Monster;

int main() {
	Monster a;

	Monster array[3]; // 구조체 배열

	int length = sizeof(array) / sizeof(Monster);

	for (int i = 0; i < length; i++) {
		printf("몬스터 이름을 입력하세요: ");
		scanf("%s", array[i].name);

		printf("몬스터의 생명력을 입력하세요: ");
		scanf("%d", &array[i].health);

		printf("몬스터의 공격력을 입력하세요: ");
		scanf("%d", &array[i].attack);

		printf("몬스터 방어력을 입력하세요: ");
		scanf("%d", &array[i].defense);

		printf("\n");
	}


	for (int i = 0; i < length; i++) {
		printf("이름: % s, 생명력 : % d, 공격력 : % d, 방어력 : % d\n",
			array[i].name, array[i].health, array[i].attack, array[i].defense);
	}

	return 0;

}