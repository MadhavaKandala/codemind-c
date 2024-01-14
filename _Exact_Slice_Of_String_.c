#include <stdio.h>

int main () {
    char str[100];
    fgets(str,sizeof(str),stdin);

    int a, b;
    scanf("%d %d", &a, &b);

    for (int i = a; i <= b; i++) {
        printf("%c", str[i]);
    }

}