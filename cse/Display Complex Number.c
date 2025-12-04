#include <stdio.h>

struct complex {
    float real, imag;
};

void display(struct complex c) {
    printf("Complex Number = %.1f + %.1fi\n", c.real, c.imag);
}

