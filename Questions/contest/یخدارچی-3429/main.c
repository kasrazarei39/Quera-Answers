#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    if (n > 100)
        printf("Steam");
    else if (n < 0)
        printf("Ice");
    else
        printf("Water");
    return 0;
}
