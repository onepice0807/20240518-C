#include <stdio.h>

// 1. ������ ��ɾ���� �ݺ������� ���ö�
// ��ɾ �ϳ��� ��� �ϳ��� ������ ������ִ� ����� �ִ�.
// 2. ������ �ڵ带 �ϳ��� ������
// �Լ�(Function)��� �մϴ�

// returnType �Լ���(�Ű�����){
//		��ɾ��;
// };

// returnType�� ������� ��ɾ ó���ϰ� � ������ Ÿ���� �������
// �����ִ��� �˷��ִ� ������ �Ѵ�
// return���� �Լ� ���ο� ���� �Լ� �ܺη� �����ϴ� ������ �մϴ�.
// return ���� ���� ��쿡�� void��� ����ȴ�

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


// �Լ� ����� ����
// 1. ������.
// 2. ��⼺.
// 3. ���뼺.

void PrintMonster(int count) {
	for (int i = 0; i < count; i++) {
		printf("Monster\n");
	}
}

// returntype : int
// �Ű����� : int �� 3���� ����.
int add(int a, int b, int c) {
	int temp = 0;
	temp = a + b + c;

	return temp;
}

int main() {
	
	//PrintMonster5�� ����� Monster ���ڿ� 5�� ���
	PrintMonster5();

	//PrintMonster�� ����� Monster ���ڿ� 5�� ���
	PrintMonster(5);

	/// ....

	// Monster ���ڿ� 3�� ���
	PrintMonster(3);

	/// ....

	// Monster ���ڿ� 2�� ���
	PrintMonster(2);

	int a = 10;
	int b = 20;
	int c = 30;

	int ret = add(a, b, c); // �Լ��� ȣ���� �� �����ϴ� ���� ����(argument)��� �Ѵ�.
							// ���ڰ��� �޴� ������ �Ű�����(parameter)��� �Ѵ�.

	printf("%d + %d + %d = %d\n", a, b, c, ret);

	return 0;
}