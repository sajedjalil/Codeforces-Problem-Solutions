#include <stdio.h>

int main (void) {
    long long int n;
    int k,w,a=0,i=0;

    scanf("%d %I64d %d",&k,&n,&w);

    for(i=k; a<w ; i = i+k, a++) n = n-i;

    if(n>0) printf("0\n");
    else printf("%d\n", n*(-1));

    return 0;
}
