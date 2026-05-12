#include "calc.h"
#include "../include/printf/printf.h"
#include "../include/printf/vga.h"
#include "../../drivers/keyboard.h"

void calc() {
    keyboard_init();
    vga_init();
    printf(" siema w kalkulatorze\n");
    printf(" wpisz pierwsza liczbe:\n");
    char n1 = keyboard_getchar();
    print(" napisz jakie dzialanie\n");
    char d = keyboard_getchar();
    printf(" teraz druga:\n");
    char n2 = keyboard_getchar();

    if (d == '+') {
        printf(" wynik: %d\n", (n1 - '0') + (n2 - '0'));
    }
    if (d == '-') {
        printf(" wynik:");
        printf(n1 - n2);
    }
    if (d == '/') {
        if (n1 && n2 == 0) {
            printf(" pamietaj kazimiero nigdy nie dziel przez zero\n");
        } else {
            printf(" wynik:");
            printf(n1 / n2);
        }
    }
}