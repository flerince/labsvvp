#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int c = 0, N, i;
	printf("Введите число, квадрат которого хотите посчитать\n");
	scanf_s("%d", &N);
	for (i = 1; i < (2*N) ; i = i + 2) {
		c = c + i;
		printf("Текущее значение суммы: %d \n", c);
	}
	printf("Итоговое значение: %d \n", c);
	return 0;
}