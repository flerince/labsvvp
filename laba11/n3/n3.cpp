#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int A, B, C,x1,x2;
	printf("Введите значения точек А В C \n");
	scanf_s("%d%d%d", &A, &B, &C);
	x1 = abs(A - B);
	x2 = abs(A - C);
	if (x1<x2) 
	printf("Ближе к A расположена В, ее расстояние до точки А = %d ", x1);
	else printf("Ближе к A расположена C, ее расстояние до точки А = %d ", x2);
	return 0;
}
