#include <stdio.h>

int main() {
    FILE *src, *dest;
    char ch;

    src = fopen("file1.txt", "r");
    dest = fopen("file2.txt", "w");

    if (!src || !dest) {
        printf("Error opening files.\n");
        return 0;
    }

    while ((ch = fgetc(src)) != EOF)
        fputc(ch, dest);

    printf("File copied successfully.\n");

    fclose(src);
    fclose(dest);
    return 0;
}

