#include "konfiguracja.h"
#include "../include/printf/printf.h"
#include "../include/printf/vga.h"
#include "../../drivers/keyboard.h"
#include "../include/blue.h"
#include <pik.h>
#include <graficzny.h>

void konfiguracja() {
    keyboard_init();
    vga_init();
    blue();
    beep();
    printf("                                      tarixeniOS                                                                                                                                                                                                   \n");
    printf("Witam w Systemie tarixeniOS!                                                                                                              \n");
    printf("nasz system jest dopiero co stworzony wiec sie nie dziw ze jest niedokonczony                                                                                                                                                                          \n");
    printf("mam nadzieje ze ci sie spodoba                                                                                                                                         \n");
    printf("napisz cos aby wyjsc z konfiguracji (jesli chcesz tryb graficzny napisz g)                                                                                                                                                                                                             \n");
    printf("                                                                                                                                                                                                                                                   ");
    char buf[256] = {0};
    int i = 0;
    while (1) {
        char com = keyboard_getchar();
        if (com == '\n' || com == '\r') {
            buf[i] = 0;
            if (buf[0] == 'g') {
                graficzny();
            }
            break;
        } else {
            blue();
            blue();
        }
    }
}
