#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int A, B,s;
	printf("Введите длины отрезков А и В (A>B)\n");
	scanf_s("%d%d", &A, &B);
	if (A > B) {
		s = A - B * trunc(A / B);
		printf("Длина незанятого участка А: %d \n", s);
	}
	else printf("Введеное значение A не соответствует условию");
	return 0;
}