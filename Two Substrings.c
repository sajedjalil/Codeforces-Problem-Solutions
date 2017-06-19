#include <stdio.h>
#include <string.h>

int main (void) {
    char str[100001];
    long long int a;
    int b=1, c=1,d=0;

    gets(str);

    for(a=1; str[a]; a++) {
        if(str[a-1]=='A' && str[a]=='B' && b) {
            b=0;
            a++;
        }
        else if(str[a-1]=='B' && str[a]=='A' && c) {
            c=0;
            a++;
        }
    }
    if(!b && !c) d++;

    for(a=strlen(str)-1,b=1,c=1; a>-1; a--) {
        if(str[a+1]=='A' && str[a]=='B' && b) {
            b=0;
            a--;
        }
        else if(str[a+1]=='B' && str[a]=='A' && c) {
            c=0;
            a--;
        }
    }
    if(!b && !c) d++;

    if(d) printf("YES\n");
    else printf("NO\n");

    return 0;
}
