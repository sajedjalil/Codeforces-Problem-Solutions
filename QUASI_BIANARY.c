#include <stdio.h>

int main () {
    long long int i,j,m,l[1000];
    int k,n,o;

    scanf("%I64d", &i);
    j=i;

    for(n=0,o=0; i ;n++) {
        for(k=0 ; j ; j=j/10) k++;
        for(m=0; k ; k-- ) {
            m = (m*10)+1;
            printf("%d\n",m);
        }

        if (i>m) {
            i= i-m;
            l[n]=m;
            o++;
        }
    }

    printf("%d\n",m);
    for(n=0 ; l[n]; n++) {
        printf("%d ", l[n]);
    }


    return 0;
}
