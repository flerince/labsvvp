#include <stdio.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL, "Russian");
	int A, B;
	printf("Введите числа A и B \n");
	scanf_s("%d%d", &A, &B);
	if (A > 2 && B <= 3)
		printf("Выражение A > 2 и B <= 3 истино");
	else ("Выражение A > 2 и B <= 3 ложно");
	return 0;
}
