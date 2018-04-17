#include <stdio.h>

int main() {
    int prev, cur;

    while ((cur = getchar()) != EOF) {
        if (cur == prev && prev == ' ')
            ;
        else {
            putchar(cur);
            prev = cur;
        }
    }
}