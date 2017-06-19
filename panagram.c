#include <stdio.h>
#include <ctype.h>

int main () {
    char str1[101];
    char test[27];
    int count;
    int i,j,k=0;

    scanf("%d", &i);

    gets(str1);
    gets(str1);
    for( j=0; j<i; j++) {
        str1[j]=tolower(str1[j]);
    }

    for(j=0; j<26 ; j++) test[j]= j+97;
    test[j]='\0';

    for(j=0 ; j<i; j++) {
        for(k=0; k<26 ; k++) {
            if (str1[j]== test[k]) test[k]=2;
        }
    }

    for(j=0,k=0; test[j]; j++) {
        if(test[j]==2) k++;
    }

    if(k==26)printf("YES");
    else printf("NO");

    return 0;
}
