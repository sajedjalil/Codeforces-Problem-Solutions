#include <stdio.h>

int main (void)
{
    int dime;
    int i,j,k;
    char ch;

    scanf("%d", &dime);

    if(!(dime%2)) printf("%d\n", (dime*dime)/2 );
    else printf("%d\n", ((dime*dime)/2)+1);

    for(i=0, k=0; i<dime; i++) {
        for(j=0 ; j<dime; j++){
            if(!(k%2)) printf("C");
            else printf(".");
            k++;
        }
        if(!(dime%2)) k--;
        printf("\n");
    }

    return 0;
}
