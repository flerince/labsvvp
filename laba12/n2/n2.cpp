#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");
    int itog, n;
    char C;
    printf("Введите текущее направление (первая буква на латинице)\n");
    scanf_s("%c", &C);
    printf("Введите  цифровую команду (0-продолжать, 1 - направо, -1 - налево) \n");
    scanf_s("%d", &n);
    switch (C) {
    case 'S':
        itog = 1;
        break;
    case 'Z':
        itog = 2;
        break;
    case 'U':
        itog = 3;
        break;
    case 'V':
        itog = 4;
        break;
    }
    itog = itog + n;
    printf("Положение робота после движения: ");
    switch (itog) {
    case 0:
        printf("Запад");
        break;
    case 1:
        printf("Север");
        break;
    case 2:
        printf("Восток");
        break;
    case 3:
        printf("Юг");
        break;
    case 4:
        printf("Запад");
        break;
    case 5:
        printf("Север");
        break;
    }
    return 0;
}