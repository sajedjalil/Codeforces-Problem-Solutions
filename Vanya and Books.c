#include <stdio.h>

int main (void) {
    long long int a,b,c,d=0.0;
    scanf("%I64d", &a);

    if(a<10) {
        printf("%I64d\n",0+(a-0)*1);
    }
    else if(a>9 && a<100) {
        printf("%I64d\n", 9+(a-9)*2);
    }
    else if(a>99 && a<1000) {
        printf("%I64d\n", 189+(a-99)*3);
    }
    else if(a>999 && a<10000) {
        printf("%I64d\n",2889+(a-999)*4);
    }
    else if(a>9999 && a<100000) {
        printf("%I64d\n", 38889+(a-9999)*5);
    }
    else if(a>99999 && a<1000000) {
        printf("%I64d\n", 488889+(a-99999)*6);
    }
    else if(a>999999 && a<10000000) {
        printf("%I64d\n", 5888889+(a-999999)*7);
    }
    else if(a>9999999 && a<100000000) {
        printf("%I64d\n", 68888889+(a-9999999)*8);
    }
    else if(a>99999999 && a<1000000000) {
        printf("%I64d\n", 788888889+(a-99999999)*9);
    }
    else if(a==1000000000) printf("%I64d\n",8888888889 + (a-999999999)*10);

    return 0;
}
