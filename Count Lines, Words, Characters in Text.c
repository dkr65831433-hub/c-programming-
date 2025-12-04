#include <stdio.h>

int main() {
    char ch;
    int lines = 1, words = 1, chars = 0;

    printf("Enter text (press CTRL+Z / CTRL+D to end):\n");

    while ((ch = getchar()) != EOF) {
        chars++;

        if (ch == '\n')
            lines++;

        if (ch == ' ' || ch == '\n' || ch == '\t')
            words++;
    }

    printf("\nLines = %d\nWords = %d\nCharacters = %d", lines, words, chars);
    return 0;
}

