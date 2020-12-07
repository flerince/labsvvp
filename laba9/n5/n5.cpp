#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "Russian");
    int N, a;
    printf("Введите год N \n");
    scanf_s("%d", &N);
    a = ((N - 1) / 100) + 1;
    printf("Вы ввели год %d столетия", a);
    return 0;
}