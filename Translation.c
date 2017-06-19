#include <stdio.h>
#include <string.h>

int main () {
    char ch1[101],ch3;
    char ch2[101];

    int i=0,j;

    gets(ch1);
    gets(ch2);

    j = strlen(ch1) - 1;

    for( ; i<j ; i++,j--){
        ch3 = ch1[j];
        ch1[j] = ch1[i];
        ch1[i] = ch3;
    }

    if(!(strcmp(ch1,ch2))) printf("YES");
    else printf("NO");

    return 0;
}
