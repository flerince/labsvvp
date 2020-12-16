#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int A,B;
	printf("Введите числа А и В\n");
	scanf_s("%d%d", &A,&B);
	while (A != B) {
		if (A > B)
			A = A - B;
		else
			B = B - A;
	}
	printf("Их наибольший общий делитель: %d \n", A);
  return 0;
}