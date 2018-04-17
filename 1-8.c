#include <stdio.h>

int main() {
    double c, sc, tc, nc;
    c = sc = tc = nc = 0;
    while ((c = getchar()) != EOF)
        if (c == ' ') {
            ++sc;
        } else if (c == '\t') {
            ++tc;
        } else if (c == '\n') {
            ++nc;
        }
    printf("space:%.0f tab:%0.f line feed:%.0f", sc, tc, nc);
}