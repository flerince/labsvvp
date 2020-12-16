#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int i=0,N,K=0;
	printf("Введите число (N>1) \n");
	scanf_s("%d", &N);
	while (i < N) {
		K++;
		i +=3;
	}
	printf("Наименьшее из целых чисел: %d \n", K);
	printf("Сумма: %d.\n", i);
	return 0;
}