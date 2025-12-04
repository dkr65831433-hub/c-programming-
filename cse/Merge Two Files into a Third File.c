#include <stdio.h>

int main() {
    FILE *f1, *f2, *f3;
    char ch;

    f1 = fopen("a.txt", "r");
    f2 = fopen("b.txt", "r");
    f3 = fopen("c.txt", "w");

    while ((ch = fgetc(f1)) != EOF)
        fputc(ch, f3);

    while ((ch = fgetc(f2)) != EOF)
        fputc(ch, f3);

    printf("Files merged successfully.");

    fclose(f1);
    fclose(f2);
    fclose(f3);
    return 0;
}

