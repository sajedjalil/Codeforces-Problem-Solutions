#include <stdio.h>

int main (void) {

    long long int n,m,a,i,j;
    scanf("%I64d %I64d %I64d",&n, &m ,&a);

    if(n%a==0)i=n/a;
    else i=(n/a)+1;

    if(m%a==0)j=m/a;
    else j=(m/a)+1;


    printf("%I64d", i*j);

    return 0;
}
