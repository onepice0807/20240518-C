#include <stdio.h>

// �л������� ���α׷� �����Ƿ�
// �л��� ���õ� ������?
// �й�, �̸�, ����, ��ȭ��ȣ
int main() {
	int no; // �й�
	char name[30]; // �̸�
	int age; // ����
	int telephoneNumber; // ��ȭ��ȣ

	// �л��� �Ѹ��ΰ�?
	// �������� �л� �����͸� �����Ϸ��� ��� �ؾ��ϴ°�?

	// 1. ������ ������ ����� �л��� �����͸� �ϳ��� ����
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

	// 2. �迭�� ����� �л��� �����͸� �ϳ��� ����
	int noArray[100];
	char nameArray[100][30];
	int ageArray[100];
	int telephoneNumberArray[100];

	// �迭�δ� ������ ����
	// ������ �� ��������� ����

	// ���� �������� �ִ� �����͸� �ϳ��� ��� ���ο� ������ Ÿ���� �������ִ� ����� �ִ�.
	// �̰��� ����ü��� �Ѵ�

	// struct ����ü��{
    //   �������ִ� �����͵�;
    // };


	struct Student { // �л��� �������� �ִ� �����͸� �ϳ��� ��� struct Student��� ����ü��
					 // ������ Ÿ���� ����, ����� ���� ����Ÿ Ÿ��
		int no; // ����ü ���
		char name[30]; // ����ü ���
		int age;
		int telephoneNumber;
	};


	struct Student a; // ����ü struct Student�� ���� a�� ����

	// ����ü�� ������ ����ü ����� ������ �Ϸ��� .(period)�����ڸ� ����մϴ�.
	a.no = 1;
	a.name[0] = 'M';
	a.name[1] = 'O';
	a.name[2] = 'N';
	a.name[3] = '\0';

	a.age = 18;
	a.telephoneNumber = 11111111;

	printf("�й� %d\n", a.no);
	printf("�̸� %s\n", a.name);
	printf("���� %d\n", a.age);
	printf("��ȭ��ȣ %d\n", a.telephoneNumber);

	struct Student stArray[100]; // struct Student ������ Ÿ�� 100�� �����ϴ� �迭�� ����

	return 0;
}