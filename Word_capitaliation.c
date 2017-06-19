#include <stdio.h>

int main () {
    char ch[1001];

    gets(ch);

    if(ch[0] >= 'a' && ch[0] <= 'z') ch[0] = ch[0] - 32;
    printf(ch);

    return 0;
}
