#include <stdio.h>
#include <conio.h>

int main (void) {
    char str1[27],ch1;
    char str2[100][100];
    int row, column,i,j,m,n=0,l;

    scanf("%d %d", &row, &column);
    scanf("%c",&ch1);
    scanf("%c",&ch1);

    for(i=0; i<row; i++){
        for(j=0; j<column; j++) str2[i][j]=getche();
    }

    for(i=0; i<row ;i++){
        for(j=0; j<column; j++){
            if(str2[i][j-1] == ch1 || str2[i][j+1] == ch1 || str2[i-1][j] == ch1 || str2[i+1][j] == ch1 ) {
                if(str2 != '.') {
                    for(l=0,m=1; l<27; l++) {
                        if(str1[l]== str2[i][j]) {
                            m=0;
                            break;
                        }
                    }
                    if(m=1) {
                        str1[n]= str2[i][j];
                        n++;
                    }
                }
            }
        }
    }

    printf("%d",n);

    return 0;
    }
