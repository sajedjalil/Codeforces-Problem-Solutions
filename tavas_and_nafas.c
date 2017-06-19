#include <stdio.h>

int main () {
    int a,b,c;
    char atto1[10][10]= {"zero","one","two","three","four","five","six","seven","eight","nine"};
    char atto2[10][10]= {"ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
    char atto3[ 8][10]= {"twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

    scanf("%d", &a);
    b=a/10;

    if (b==0) printf("%s", atto1[a]);
    else if(b==1) printf("%s", atto2[a-10]);
    else {
        c = a%10;
        if(!c) printf("%s", atto3[b-2]);
        else {
            printf("%s", atto3[b-2]);
            printf("-");
            printf("%s", atto1[c]);
        }
    }


    return 0;
}

