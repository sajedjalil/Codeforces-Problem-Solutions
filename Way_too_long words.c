#include <stdio.h>
#include <string.h>

int main () {
    int i,j;
    char str1[101];

    scanf("%d", &i);

    for(; i; i--) {
        for (j=0; j<101; j++ ) {
            str1[j]=0;
        }
        scanf("%s", str1);
        j=strlen(str1);

        if (j>10) printf("%c%d%c\n", str1[0],j-2, str1[j-1]);
        else {
            printf("%s", str1);
            printf("\n");
        }
    }

    return 0;
}
