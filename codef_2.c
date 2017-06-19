#include <stdio.h>

int main () {
    int a;
    scanf("%d",&a);

    if(a%4==0)printf("YES");
    else if(a%2==0) {
        if(a/2 > 1) printf("YES");
        else printf("NO");
    }
    else printf("No");

    return 0;
}
