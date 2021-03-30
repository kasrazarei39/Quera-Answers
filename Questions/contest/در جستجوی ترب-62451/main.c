//https://quera.ir/problemset/contest/62451
//Solved by: kasrazarei39

#include <stdio.h>

int main() {
    int x1, v1, x2, v2;
    scanf("%d", &x1);
    scanf("%d", &v1);
    scanf("%d", &x2);
    scanf("%d", &v2);
    if (v1 == v2) {
        printf("WAIT WAIT");
    } else if (x1 < x2) {
        if (v1 < v2) {
            printf("BORO BORO");
        } else {
            printf("SEE YOU");
        }
    } else if (x1 > x2) {
        if (v1 < v2) {
            printf("SEE YOU");
        } else {
            printf("BORO BORO");
        }
    }
    return 0;
}
