#include <stdio.h>

struct complex {
    float real, imag;
};

struct complex multiply(struct complex a, struct complex b) {
    struct complex c;
    c.real = (a.real * b.real) - (a.imag * b.imag);
    c.imag = (a.real * b.imag) + (a.imag * b.real);
    return c;
}

