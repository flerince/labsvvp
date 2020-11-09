#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int N,s;
	printf("Введите N - количество секунд с начала суток \n");
	scanf_s("%d", &N);
	s = N - 60 * trunc(N / 60);
	printf("Количество секунд, прошедших с начала последней минуты: %d", s);
	return 0;
}