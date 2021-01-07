#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Russian");
	const int n = 10;
	int a[n], i, L, K;
	float rez, sum=0, temp=0;
	printf("Введите числа K и L (K<=L<=N) \n");
	scanf_s("%d%d", &K, &L);
	for (i = 0; i < n; i++) {
			printf("a[%d] : ", i+1);
			scanf_s("%i", &a[i]);
	}
	if (K<=L) {
		while (K<=L) {
			sum = sum + a[K-1];
			temp++;
			K++;
		}
		rez = sum/temp;
			printf("Среднее арифметическое элементов массива с номерами от K до L включительно: %5.2f \n", rez);
	}
	return 0;
}