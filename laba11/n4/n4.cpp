#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int x,y;
	printf("Введите координаты точки (х, у) не лежащей на координатных осях \n");
	scanf_s("%d%d", &x, &y);
	if ((x == 0) || (y == 0)) printf("Вы ввели неверные координаты (точка лежит на координатных осях)"); 
	else {
		if (x > 0) {
			if (y > 0) printf("Точка находится в 1 координатной четверти");
			else printf("Точка находится в 4 координатной четверти");
		}
		else if (y > 0) printf("Точка находится в 2 координатной четверти");
		else printf("Точка находится в 3 координатной четверти");
	}
	return 0;
}
