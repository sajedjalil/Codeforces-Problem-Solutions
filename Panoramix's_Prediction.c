#include <stdio.h>

int main (void) {
    int i,j,k,l=0;
    int prime[] ={
     2 ,     3   ,   5  ,    7    , 11 ,    13  ,   17   ,  19  ,   23 ,    29 ,
     31  ,   37  ,   41   ,  43  ,   47 , 0
    };


    scanf("%d %d", &i, &j);

    for(k=0; k<15; k++) {
        if(prime[k]==i) {
            if(prime[k+1]==j) {
                printf("YES\n");
                l=1;
            }
            else break;
        }
    }

    if(l==0) printf("NO\n");

    return 0;
}
