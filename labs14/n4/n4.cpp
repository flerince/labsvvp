#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int count=0;
	float S=1000, P;
	printf("Введите количество процентов P (0<P<25)\n");
	scanf_s("%f", &P);
	P = P / 100;
	while (S < 1100) {
		S = S + S * P;
		count++;
	}
	printf("Вклад превысит 1100р. через %d месяцев и будет равен %5.2f руб.\n",count,S);
	return 0;
}