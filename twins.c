#include <stdio.h>

int main (void) {
    int str[100];
    int a, b, c, d,sum=0, temp;


    scanf("%d",&a);

    for(b=0; a>b; b++) {
        scanf("%d", &str[b]);
        sum= sum +str[b];
    }

    sum= sum / 2;

    for(b=0; a>b ; b++ ) {
        for(c=b+1; a>c ; c++ ) {
            if(str[b]<str[c]) {
                d=str[b];
                str[b]=str[c];
                str[c]=d;
            }
        }
    }

    for(b=0, temp=0 ; a>b ;) {
        temp = temp + str[b];
         b++;
        if(temp>sum) break;
    }

    printf("%d", b);

    return 0;
}




