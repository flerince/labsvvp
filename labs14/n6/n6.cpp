#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int N,k=2,a=1,b=1;
	printf("Введите число N(N>1)\n");
	scanf_s("%d", &N);

	while (N > b) {
		b = a + b;
		a = b - a;
		k++;
	}
	if (N == b)  printf("Порядковый номер числа Фибоначчи (не считая 0): %d ", k);
else printf("Не является числом Фибоначчи");
	return 0;
}