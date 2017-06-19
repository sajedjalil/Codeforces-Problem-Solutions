#include <stdio.h>
#include <conio.h>

int main (void) {
    char str[21];
    int a, b;

    gets(str);
    a=strlen(str);

    printf("%d\n", a*25+26);

    return 0;
}
