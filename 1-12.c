#include <stdio.h>

#define OUT 0
#define IN 1

int main() {
    int c, status;

    status = OUT;

    while((c = getchar()) != EOF) {
        if (c == '\n' || c == '\t' || c == ' ') {
            if (status == IN) {
                putchar('\n');
            }
            status = OUT;
        }
        else {
            status = IN;
            putchar(c);
        }
    }
    printf("success");
}