#include <stdio.h>

int main (void) {
    int a, b, c, e1,e2,e3,e4,e5,e6,sum=0;

    scanf("%d %d %d", &a, &b,&c);

    e1=a + b + c;
    e2=a * b * c;
    e3=a + b * c;
    e4=a * b + c;
    e5=(a + b)* c;
    e6=a * (b+c);


    if (e1>sum) sum = e1;
    if (e2>sum) sum = e2;
    if (e3 >sum) sum = e3;
    if (e4 >sum) sum = e4;
    if (e5 >sum) sum = e5;
    if (e6>sum) sum = e6;

    printf("%d", sum);

    return 0;
}
