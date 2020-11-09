#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int A, s, a1, a2;
	printf("Введите целое трехзначное число \n");
	scanf_s("%d", &A);
	if (A > 999 or A < 100)
		printf("Введеное значение A не соответствует условию");
	else {
		a1 = A / 100;
		a2 = A % 100;
		printf("Число наоборот %d", a2 * 10 + a1);
	}
	return 0;
}