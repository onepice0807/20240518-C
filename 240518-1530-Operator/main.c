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

	Monster array[3]; // ����ü �迭

	int length = sizeof(array) / sizeof(Monster);

	for (int i = 0; i < length; i++) {
		printf("���� �̸��� �Է��ϼ���: ");
		scanf("%s", array[i].name);

		printf("������ ������� �Է��ϼ���: ");
		scanf("%d", &array[i].health);

		printf("������ ���ݷ��� �Է��ϼ���: ");
		scanf("%d", &array[i].attack);

		printf("���� ������ �Է��ϼ���: ");
		scanf("%d", &array[i].defense);

		printf("\n");
	}


	for (int i = 0; i < length; i++) {
		printf("�̸�: % s, ����� : % d, ���ݷ� : % d, ���� : % d\n",
			array[i].name, array[i].health, array[i].attack, array[i].defense);
	}

	return 0;

}