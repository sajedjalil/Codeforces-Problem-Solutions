#include <stdio.h>

int main (void) {
    double c,b,d=0;
    int a;

    scanf("%d",&a);
    c=a*100.0;
    for(; a; a--) {
        scanf("%lf", &b);
        d=d+b;
    }

    printf("%.12f", d/c*100.0);

    return 0;
}
