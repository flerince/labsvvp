#include <stdio.h>
#include <locale.h>
int Quarter(float x, float y)
{
	if ((x > 0) && (y > 0)) return 1;
	if ((x < 0) && (y > 0)) return 2;
	if ((x < 0) && (y < 0)) return 3;
	if ((x > 0) && (y < 0)) return 4;
}

int main() {
	setlocale(LC_ALL, "Russian");
	int i,X;
	float x, y;
	printf("Введите х и у не равные 0 \n");
	for (i = 1; i < 4; i++) {
		scanf_s("%f%f", &x, &y);
		if (x*y != 0 ) {
			X = Quarter(x,y);
			printf("Номер четверти %d \n", X);
		}
		else printf("х или у == 0 (противоречию условию) ");
	}
	return 0;
}