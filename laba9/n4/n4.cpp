#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Russian");
    int A,B,C,S,n;
    printf("Введите длины прямоугольника AxB и квадрат со стороной С \n");
    scanf_s("%d%d%d", &A, &B, &C);
    n = (A / C) * (B/C);
    S = A * B - n * C * C;
    printf("Квадрат поместится в прямоугольник %d раз, останется %d свободной площади", n,S);
    return 0;
}