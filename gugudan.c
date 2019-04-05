#include <stdio.h>
void main() {
    int i=2, j=0;
    while(i<10) {
        printf("%d단\n",i);
        j=1;
        while(j<10) {
            printf("%dx%d=%d\n", i, j, i*j);
            j++;
        }
    printf("\n");
    i++;
    }
}