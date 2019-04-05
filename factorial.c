#include<stdio.h>
void main() {
    unsigned long int f;
    int n=0;
    printf("계승을 구할 수를 입력하세요:");
    scanf("%d", &n);
    f=n;
    if (n<0)
        printf("양수를 입력해주세요");
    else {
    printf("%d!=", n);
    while(--n)
            f*=n;
    printf("%lu",f);
    }
}