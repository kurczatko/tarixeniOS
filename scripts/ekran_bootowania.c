#include "ekran_bootowania.h"
#include "../include/printf/printf.h"
#include "../include/printf/vga.h"

void ekran_bootowania() {
    vga_init();
    printf("tarixeniOS\n");
}
