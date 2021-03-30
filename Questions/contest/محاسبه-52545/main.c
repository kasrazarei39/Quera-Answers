//https://quera.ir/problemset/contest/52545
//Solved by: kasrazarei39

#include <stdio.h>

int main() {
    int[4][3] inputs;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 3; ++j) {
            scanf("%d", &inputs[i][j])

        }
    }
    int max = 0;
    int player;

    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 3; ++j) {
            if(max < inputs[i][j]){
                max = inputs[i][j];
                player = i;
            }
        }
    }

    printf("%d", player + 1);

    return 0;
    }
