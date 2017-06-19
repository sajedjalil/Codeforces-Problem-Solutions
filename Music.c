#include <stdio.h>

int main (void) {
    float a, b, c;
    float sum;
    int count=1;
    scanf("%f %f %f", &a, &b, &c);


    sum=b*c;
    b=sum;
    while(sum<a) {
        sum =(b*c);
        b=sum;
        count++;

    }
    printf("%d\n", count);

    return 0;
}

