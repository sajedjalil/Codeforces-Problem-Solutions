#include <stdio.h>

int main (void) {
    char str[200001];

    long long int a, b, c=0, d=0, e;

    scanf("%I64d", &a);
    gets(str);
    gets(str);

    for(b=0; b<a; b++) {
        if(str[b]=='1') c++;
        else d++;
    }


    if(c>d) printf("%I64d\n",c-d);
    else printf("%I64d\n",d-c);

    return 0;
}
