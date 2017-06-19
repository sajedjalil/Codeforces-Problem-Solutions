#include <stdio.h>
int main (void) {
    char ch1;
    long long int nA=0, nI=0, nF=0, count;

    scanf("%I64d", &count);
    scanf("%c", &ch1);

    while( count ) {
        scanf("%c", &ch1);
        if(ch1=='A') nA++;
        else if(ch1== 'I') nI++;
        else nF++;

        count--;
    }

    if(nI > 1) printf("0");
    else if(nI==1) printf("1");
    else printf("%d", nA);

    return 0;
}
