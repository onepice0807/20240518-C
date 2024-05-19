#include <stdio.h>

float add(float a, float b) {
	return a + b;
}

float sub(float a, float b) {
	return a - b;
}

float mul(float a, float b) {
	return a * b;
}

float div(float a, float b) {
	return a / b;
}

int main() {
	float a = 3.4f;
	float b = 6.45f;

	float ret = add(a, b);
	printf("%f + %f = %f\n", a, b, ret);

	ret = sub(a, b);
	printf("%f - %f = %f\n", a, b, ret);

	ret = mul(a, b);
	printf("%f * %f = %f\n", a, b, ret);

	ret = div(a, b);
	printf("%f / %f = %f\n", a, b, ret);

	return 0;
}