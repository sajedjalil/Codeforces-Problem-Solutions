#include <stdio.h>

int main (void) {
    char str1[51],changer;
    int stu, time, count=0,i;

    scanf("%d %d", &stu, &time);

    gets(str1);
    gets(str1);

    for ( ; time ; time--) {
        for(i=0 ; str1[i]; i++ ) {
            if(str1[i]== 'B' && str1[i+1]=='G') {
                changer= str1[i];
                str1[i]= str1[i+1];
                str1[i+1]= changer;
                i++;
            }
        }
    }

    printf(str1);

    return 0;
}
