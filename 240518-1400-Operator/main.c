#include <stdio.h>

int main() {
	int a = 20;

	int* pa;
	
	pa = &a;

	int** ppa;

	ppa = &pa;

	return 0;
}