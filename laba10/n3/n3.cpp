#include <stdio.h>
#include <locale.h>


int main() {
	setlocale(LC_ALL, "Russian");
	int A;
	printf("Введите целое положительное число A\n");
	scanf_s("%d", &A);
	if (A >= 0) {
		if (A > 9 && A < 100 && (A % 2) == 0)
			printf("Выражение «Данное число является четным двузначным» истино");
		else printf("Выражение «Данное число является четным двузначным» ложно");
	}
	else printf("Введено отрицательное число");
	return 0;
}
