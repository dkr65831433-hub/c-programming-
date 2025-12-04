#include <stdio.h>

struct complex {
    float real, imag;
};

struct complex add(struct complex a, struct complex b) {
    struct complex c;
    c.real = a.real + b.real;
    c.imag = a.imag + b.imag;
    return c;
}

