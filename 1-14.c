#include <stdio.h>

#define IN 1
#define OUT 0

/*统计单词长度的吹走直方图*/
main () {
    int i, j, c, nc, nl, lmax, arrl[1000], state;

    c = nc = nl = lmax = i = 0;
    state = OUT;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (state == IN) {
                arrl[nl -1] = nc;
                if (nc > lmax) {
                    lmax = nc;
                }
            }
            state = OUT;
            nc = 0;
        } else {
            if (state == OUT) {
                ++nl;
            }
            ++nc;
            state = IN;
        }
    }
    while (i <= nl) {
        for (j = 1; j <= lmax; ++j) {
            if (i < nl) {
                if (arrl[i] == j) {
                    printf("* ");
                } else {
                    printf("  ");
                }
            } else {
                printf("%d ", j);
            }
            if (j == lmax) {
                putchar('\n');
            }
        }
        ++i;        
    }
}