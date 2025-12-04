#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char str[1000];
    int n;

    fp = fopen("data.txt", "r");

    fgets(str, 1000, fp);

    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = n - 1; i >= 0; i--)
        printf("%c", str[i]);

    for (int i = n; str[i] != '\0'; i++)
        printf("%c", str[i]);

    fclose(fp);
    return 0;
}

