#include <stdio.h>

int main () {
    int a,b,c,d;
    int num[4];

    scanf("%d", &a);

    for(a=a+1; ;a++) {
        for(b=a,c=0; c<4; c++) {
            num[c]= b%10;
            b=b/10;
        }
        for(c=0,d=0; c<4; c++) {
            for(b=c+1; b<4; b++) {
                if(num[c] == num[b]) d=1;
            }
        }
        if(d==0) {
            printf("%d\n", a);
            break;
        }
    }

    return 0;
}
