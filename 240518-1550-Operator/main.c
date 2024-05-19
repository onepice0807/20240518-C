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
	// ����ü ������ �ּҰ����� ����ü ������ ����� �����Ҷ��� ->(ȭ��ǥ)�������� ���

	printf("�̸�: %s\n", st1.Next->Next->Next->name);
	printf("����: %d\n", st1.Next->Next->Next->age);
	printf("�й�: %d\n", st1.Next->Next->Next->stNo);

	// ����
	// st1 ������ st3�� ����� �����ؼ� ���� �������̿� 3���� ���ؼ� ����
	// ���� �й��� 10�� �߰��ؼ� �����ϰ� ����� ���� ���

	printf("\n");
	st1.Next->Next->age += 3;
	st1.Next->Next->stNo += 10;
	printf("����: %d\n", st1.Next->Next->age);
	printf("�й�: %d\n", st1.Next->Next->stNo);

	// ����
	// st4 ������ st2�� ����� �����ؼ� ���� �������̿� 3���� ���ؼ� ����
	// ���� �й��� 10�� �߰��ؼ� �����ϰ� ����� ���� ���
	printf("\n");
	st4.Prev->Prev->age += 3;
	st4.Prev->Prev->stNo += 10;
	printf("����: %d\n", st4.Prev->Prev->age);
	printf("�й�: %d\n", st4.Prev->Prev->stNo);


	return 0;
}