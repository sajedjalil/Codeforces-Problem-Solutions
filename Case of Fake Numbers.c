#include <stdio.h>

int main (void) {
    int atto[1000];
    int a, b, c=0;

    scanf("%d", &a);
    for(b=0; b<a; b++) scanf("%d", &atto[b]);

    while(atto[0] != 0) {
        for(b=0; b<a ; b++) {
            if(b%2 == 1 && atto[b]==0) atto[b]= a-1;
            else if (b%2==1) atto[b]--;
            else if (atto[b]== a-1) atto[b]=0;
            else atto[b]++;
        }
    }

    for(b=0; b<a; b++) {
        if(atto[b]==b) c=1;
        else {
            c=0;
            break;
        }
    }

    if(c==1) printf("YES\n");
    else printf("No\n");

    return 0;
}
