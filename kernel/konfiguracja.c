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
    printf("                                      tarixenOS                                                                                                                                                                                                   \n");
    printf(" Witam w Systemie tarixenOS!                                                                                                              \n");
    printf(" nasz system jest dopiero co stworzony wiec sie nie dziw ze jest niedokonczony                                                                                                                                                                          \n");
    printf(" mam nadzieje ze ci sie spodoba                                                                                                                                         \n");
    printf(" kliknij enter aby wyjsc z konfiguracji (jesli chcesz tryb graficzny napisz g)                                                                                                                                                                                                             \n");
    printf("                                                                                                                                                                                                                                                   ");
    char buf[256] = {0};
    int i = 0;
    while (1) {
        char com = keyboard_getchar();
        if (com == '\n' || com == '\r') {
            buf[i] = 0;
            if (buf[0] == 'g') {
                set_mode_13h();
                putpixel(255, 0, 0); // nie wiem czemu ale tryb graficzny nie dziala, bedzie trzeba to naprawic.
            }
            break;
        } else {
            blue();
            if (i < (int)sizeof(buf) - 1) {
                buf[i++] = com;
            }
        }
    }
}
