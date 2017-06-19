#include <stdio.h>

int main (void) {
    int num1, sum=0,i=0;
    int high, temp;

    scanf("%d %d", &num1, &high);
    for( ;i<num1 ; i++ ) {
        scanf("%d", &temp);
        sum = sum + temp;
    }
    if(sum<0) sum = sum*(-1);

    temp = sum%high;

    if(!temp) printf("%d", sum/high);
    else printf("%d", (sum/high)+1);

    return 0;
}
