#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Russian");
	float c=0.0f, N, i;
	printf("Введите стоимость кг конфет в руб.\n");
	scanf_s("%f", &N);
	for (i = 0.1; i < 1.1; i = i + 0.1) {
		c = N * i;
		printf("Стоимость за %4.1f кг = %4.1f руб. \n", i, c);
	}
	return 0;
}