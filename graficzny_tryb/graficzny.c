#include "graficzny.h"

void graficzny() {
    __asm__ volatile (
        ".intel_syntax noprefix\n\t"
        "mov ax, 0x0013\n\t"
        "int 0x10"
    );

    while(1);
}