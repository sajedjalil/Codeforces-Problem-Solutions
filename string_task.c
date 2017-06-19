#include <stdio.h>
#include <ctype.h>

int main () {
    char str1[101],str2[202];
    int i,j;


    for(i=0; i<101 ; i++) str1[i]=0;
    for(j=0; j<202 ; j++) str2[j]=0;

    scanf("%s", str1);

    for(i=0; str1[i]; i++) str1[i]= tolower(str1[i]);

    for(i=0,j=0; str1[i] ; i++) {
        if(str1[i]=='a' || str1[i]=='o' || str1[i]=='y' || str1[i]=='e' || str1[i]=='u' || str1[i]=='i' );
        else {
            str2[j]='.';
            j++;
            str2[j]= str1[i];
            j++;
        }
    }

    printf(str2);



    return 0;
}
