#include <stdio.h>

int main () {
    char ch[201];
    int i,j,k=0,l=0,m=0,n;

    scanf("%s", ch);

    for(i=0; ch[i]; i++ ) {
        if(ch[i]=='1') k++;
        else if(ch[i]=='2') l++;
        else if(ch[i]=='3') m++;
    }

    n=2*(k+l+m)-1;

    for (i=0; n; i=i+2,n-- ) {
        if(k) {
            ch[i]='1';
            k--;
        }
        else if(l) {
            ch[i]='2';
            l--;
        }
        else ch[i]='3';
    }

    printf("%s", ch);

    return 0;
}
