#include <stdio.h>
#include <string.h>

int main (void) {
    char str1[201];
    int a=0, b, c, d;

    gets(str1);
    b = strlen(str1);
    for( c=0U; a<b; a++) {
        if(str1[a] == 'W' && str1[a+1]== 'U' && str1[a+2] == 'B') {
            a=a+2;
            if(c==1) printf(" ");
            c=0;
        }
        else {
            printf("%c", str1[a]);
            c=1;
        }
    }

    return 0;
}

