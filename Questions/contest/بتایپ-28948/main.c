//https://quera.ir/problemset/contest/28948/
//Solve By: kasrazarei39
#include <stdio.h>
#include <string.h>

int main() {
    char input[100000];
    scanf("%s", &input);
    int i = 0;
    int temp;
    int len = strlen(input);
    while (input[i] != ' ') {
        if (input[i] == '=') {
            input[i] = '!';
            temp = i;
            while (input[temp] == '!') {
                temp--;
            }
            input[temp] = '!';
            i++;
        } else {
            i++;
        }
    }
    i = 0;
    while (len--) {
        if (input[i] != '!' && input[i] != ' ')
            printf("%c", input[i]);
        i++;
    }
}