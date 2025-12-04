#include <stdio.h>

struct student {
    char name[30];
    int m1, m2, m3;
};

int main() {
    struct student s;
    int total;
    float percent;

    printf("Enter name: ");
    scanf("%s", s.name);

    printf("Enter 3 subject marks: ");
    scanf("%d %d %d", &s.m1, &s.m2, &s.m3);

    total = s.m1 + s.m2 + s.m3;
    percent = total / 3.0;

    printf("Total = %d\nPercentage = %.2f", total, percent);
    return 0;
}

