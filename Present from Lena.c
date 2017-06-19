#include <stdio.h>

int main (void) {
    int a, b, c,d,e,f;


    scanf("%d", &a);

    for(b=a+1,c=1; b ; c++,b--) {
        for(d=b-1; d; d--) printf("  ");
        for(d=c-1,e=0; d; d--,e++) printf("%d ",e);
        for(d=c; d>1 ; d--,e--) printf("%d ",e);

        printf("0\n");
    }

    for(b=a; b; b--) {
        for(d=a-b+1; d; d--) printf("  ");
        for(d=b-1,e=0; d; d--,e++ )printf("%d ",e);
        for(d=b-1; d; d-- )printf("%d ",d);

        printf("02\n");
    }



    return 0;
}
