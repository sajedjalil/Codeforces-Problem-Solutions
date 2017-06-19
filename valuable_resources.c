#include <stdio.h>

int main (void) {
    int i;
    long long int cord1, cord2, axxh=-1000000000, axyh=-1000000000, axxl=1000000000, axyl=1000000000;

    scanf("%d", &i);

    for( ; i ; i--) {
        scanf("%I64d %I64d", &cord1, &cord2);
        if(cord1 > axxh) axxh=cord1;
        if(cord1 < axxl) axxl=cord1;
        if(cord2 > axyh) axyh=cord2;
        if(cord2 < axyl) axyl=cord2;
    }

    axxh = axxh - axxl;
    if(axxh<0) axxh = axxh*(-1);

    axyh = axyh - axyl;
    if(axyh<0) axyh = axyh*(-1);

    if(axxh<axyh) axxh=axyh;

    printf("%I64d", axxh*axxh);

    return 0;
}
