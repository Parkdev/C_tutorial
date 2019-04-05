#include <stdio.h>
void main() {
    int i, n, c='A';
    while(1) {
        printf("\n 횟수입력");
        scanf("%d", &n);
        for(i=1; i<=n; i++) {
            printf("%c", c);
            if(c=='Q')
                goto end;
            c++;
        }
    }
    end:
    printf("\n\n끝");
}