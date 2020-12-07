#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");
    int x;
    printf("Введите номер дня в году (0<x<366) \n");
    scanf_s("%d", &x);
    if (x > 0 && x < 366) {
        while (x > 6)
            x = x - 7;
        switch (x)
        {
        case 0:
            printf("День недели - воскресенье\n");
            break;
        case 1:
            printf("День недели - понедельник\n");
            break;
        case 2:
            printf("День недели - вторник\n");
            break;
        case 3:
            printf("День недели - среда\n");
            break;
        case 4:
            printf("День недели - четверг\n");
            break;
        case 5:
            printf("День недели - пятница\n");
            break;
        case 6:
            printf("День недели - суббота\n");
            break;
        }
    }
    else printf("Введен неверный номер дня года");
        return 0;
}
