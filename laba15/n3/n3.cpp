#include <stdio.h>
#include <locale.h>
float RingS(float R1, float R2)
{
	return 3.14 * (R1 * R1 - R2 * R2);
}

int main() {
	setlocale(LC_ALL, "Russian");
	int i;
	float R1, R2,X;
	printf("Введите радиусы R1 и R2 (R1>R2)\n");
		for (i = 1; i < 4; i++) {
			scanf_s("%f%f", &R1, &R2);
			if (R1 > R2) {
				X = RingS(R1, R2);
				printf("Плошадь кольца, заключенного меж окружностями = %5.3f \n", X);
			}
			else printf("Введено значение R1 <= R2");
		}
	return 0;
}