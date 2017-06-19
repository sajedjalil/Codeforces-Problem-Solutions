#include <stdio.h>

int main () {
    char str1[] = "hello";
    char str2[101];

    int i=0,j=0,k=0;

    gets(str2);

    while(str1[i] && str2[j]) {
        if(str1[i]==str2[j]) {
            i++;
            k++;
        }
        j++;
    }

    if(k==5) printf("YES");
    else printf("NO");

    return 0;
}
