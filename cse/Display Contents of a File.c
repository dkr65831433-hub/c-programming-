#include <stdio.h>

int main() {
    FILE *fp;
    char ch;

    fp = fopen("input.txt", "r");

    if (fp == NULL) {
        printf("Cannot open file.\n");
        return 0;
    }

    while ((ch = fgetc(fp)) != EOF)
        putchar(ch);

    fclose(fp);
    return 0;
}

