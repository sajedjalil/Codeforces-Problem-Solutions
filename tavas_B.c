#include <stdio.h>
#include <math.h>

int main () {

    long long int a,b;
    int i=0,j,k,m,n=0;

    scanf("%I64d", &a);

    for ( b=a ; b ; ) {
        b = b/10;
        i++;
    }

    for(j=1; j<i; j++) {
        for(k=1, m=1; k<=j; k++) {
            m= m*2;
        }
        n=n+m;
    }


    if(a%((i-1)*10)==4) n = n+1;



    printf("%d", n);

    return 0;
}
