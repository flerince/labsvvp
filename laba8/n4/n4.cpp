#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_ALL, "Russian");
	int A,s,a1,a2;
	printf("Введите целое двузначное число \n");
	scanf_s("%d", &A);
	if (A>99 or A<10)
		printf("Введеное значение A не соответствует условию");
	else {
		a1 = A / 10; 
		a2 = A % 10;
		printf("Число наоборот %d", a2*10+a1);
	}
	return 0;
}