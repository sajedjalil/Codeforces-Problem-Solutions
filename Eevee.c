#include <stdio.h>
#include <string.h>

int main (void) {
    char str[][2][9]= {
        "vaporeon","8",
        "jolteon", "7",
        "flareon", "7",
        "espeon", "6",
        "umbreon", "7",
        "leafeon", "7",
        "glaceon", "7",
        "sylveon", "7"
    };

    char str2[9];
    int a , b, c,d,e,f,sum,flag;

    scanf("%d", &a);
    gets(str2);
    gets(str2);
    c=strlen(str2);

    if(a==8) flag=0;
    else if(a==6) flag=3;
    else{
        for(b=0,sum=0; b<8; b++) {
            if((a+48)==str[b][1][0]) {
                for(e=0,f=0; e<a; e++) {
                    if(str2[e]==str[b][0][e]) f++;
                }
                if(f>sum) {
                    sum = f;
                flag= b;
                }
            }
        }
    }

    printf("%s\n", str[flag][0]);



    return 0;
}
