#include <stdio.h>

int main (void) {
    int atto[4],i,j,k,l=0,m=0,n=0;

    scanf("%d %d %d %d", &atto[0],&atto[1],&atto[2],&atto[3]);

    // bubble sort
    for(i=0; i<4; i++) {
        for(j=i+1; j<4; j++) {
            if(atto[i]<atto[j]) {
                k=atto[i];
                atto[i]=atto[j];
                atto[j]=k;
            }
        }
    }

    for(i=0; i<2; i++) {
        if(atto[i] < atto[i+1]+atto[i+2]) l++;
        else if(atto[i] == atto[i+1]+atto[i+2]) m++;
        else n++;
    }

    if(l>0) printf("TRIANGLE");
    else if(m>0) printf("SEGMENT");
    else printf("IMPOSSIBLE");

    return 0;
}
