#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Russian");
	float c=1.0f, N, i;
	printf("Введите количество сомножителей\n");
	scanf_s("%f", &N);
	for (i = 1.1; i < (1.1+0.1*N); i = i + 0.1) {
		printf("Сомножители %4.1f \n", i);
		c = c * i;
	}
	printf("Их произведение %4.3f \n", c);
	return 0;
}