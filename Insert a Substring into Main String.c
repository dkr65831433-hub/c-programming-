#include <stdio.h>
#include <string.h>

int main(){
    char str[100], sub[50], result[150];
    int pos, i = 0, j = 0;

    printf("Enter main string: ");
    gets(str);

    printf("Enter substring: ");
    gets(sub);

    printf("Enter position: ");
    scanf("%d", &pos);

    while(i < pos){
        result[i] = str[i];
        i++;
    }

    while(sub[j] != '\0'){
        result[i++] = sub[j++];
    }

    j = pos;
    while(str[j] != '\0'){
        result[i++] = str[j++];
    }

    result[i] = '\0';

    printf("Final string: %s", result);

    return 0;
}

