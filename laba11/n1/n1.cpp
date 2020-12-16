#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int A, B;
	printf("Введите значение А и В \n");
	scanf_s("%d%d", &A, &B);
	if (A == B) {
		A=0;
		B=0;
	}
	else {
		if (A > B) B = A;
		else A = B;
	}
	printf("Новые значения переменных: А=%d, B=%d", A, B);
	return 0;
}
