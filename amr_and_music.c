#include <stdio.h>

int main (void) {
    int i,j,k,l,m,n=0;
    int art[100],art2[100];

    scanf("%d %d", &i, &j);

    for(k=0; k<i ; k++){
        scanf("%d", &art[k]);
        art2[k]=art[k];
    }


    // sort
    for(k=0; k<i; k++) {
        for(l=k+1; l<i; l++) {
            if(art[k]>art[l]){
                m=art[k];
                art[k]=art[l];
                art[l]=m;
            }
        }
    }

    for(k=0,m=0,l=0; l<i ;k++, l++) {
        if(art[k]+ m <= j) {
            m = m+ art[k];
            n++;
        }
        else break;
    }

    printf("%d\n", n);


    for(k=0,m=0,l=0,n=0; l<i ;k++, l++) {
        if(art[k]+ m <= j) {
            for(n=0; n<i; n++){
                if(art2[n]== art[k]) {
                    printf("%d ", n+1);
                    art2[n]=-1;
                    break;
                }
            }
            m = m+ art[k];
        }
        else break;
    }

    return 0;
}
