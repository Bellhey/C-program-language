#include <stdio.h>

#define IN 1    /*  在单词内    */
#define OUT 0    /*  在单词外    */
#define MARK '.'    /*  直方图标记点    */   
/* 打印输入中单词长度的水平直方图 */
main() {
    int c, i, lmax, nc, nl, state, arrl[1000];

    state = OUT;
    nl = nc = lmax = 0;
    while ((c = getchar()) != EOF ) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (state == IN) {
                arrl[nl - 1] = nc;
            }
            if (nc > lmax) {
                lmax = nc;
            }
            nc = 0;
            state = OUT;
        } else {
            if (state == OUT) {
                ++nl;
            }
            state = IN;
            ++nc;
        }
    }
    while (lmax > 0) {
        printf("\n%d", lmax);
        for (i = 0; i < nl; ++i) {
            if (arrl[i] == lmax) {
                printf(" * ");
            } else {
                printf("  ");
            }
        }
        --lmax;
    }
}