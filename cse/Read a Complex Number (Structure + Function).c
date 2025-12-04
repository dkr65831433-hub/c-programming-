#include <stdio.h>

struct complex {
    float real, imag;
};

struct complex read() {
    struct complex c;
    printf("Enter real and imaginary parts: ");
    scanf("%f %f", &c.real, &c.imag);
    return c;
}

