#include <stdio.h>
#include <conio.h>

int main() {
    long c;

    while ((c = _getch()) != EOF) {
        if (c == '\b') {
            putchar('\\');
            putchar('b');
        } else if (c == '\t') {
            putchar('\\');
            putchar('t');
        } else if (c == '\\') {
            putchar('\\');
            putchar('\\');
        } else {
            putchar(c);
        }
    }
}