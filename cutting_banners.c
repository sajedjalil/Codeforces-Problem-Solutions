#include <stdio.h>
#include <string.h>

int main () {
    char str1[10] = "CODEFORCES";
    char str2[100];

    int i=0,j=0,k=0;

    scanf("%s", str2);

    if(strcmp(str1,str2)) {
        for( ; i<10; i++) {
            for( ; j<101 ; j++) {
                if(str1[i] == str2[j]) {
                    k++;
                    break;
                }
            }
        }
        if(k == 10) printf("YES");
        else printf("NO");
    }

    else printf("NO");

    return 0;
}
