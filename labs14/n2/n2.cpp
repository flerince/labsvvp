#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int A, B, i, j, count = 0;;
	printf("Введите числа A и B (A>B)\n");
	scanf_s("%d%d", &A, &B);
	while (A >= B) {
		count++;
		A = A - B;
	}
	printf("B поместится в А ровно %d раз(а).\n", count);
	return 0;
}