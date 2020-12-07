#include <stdio.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL, "Russian");
	int A, B, C;
	printf("Введите числа A B C \n");
	scanf_s("%d%d%d", &A, &B, &C);
	if (A < B && B < C)
		printf("Выражение A < B < C истино");
	else printf("Выражение A < B < C ложно");
	return 0;
}
