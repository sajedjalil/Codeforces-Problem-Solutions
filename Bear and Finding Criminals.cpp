#include <cstdio>

using namespace std;

int main (void) {

    int city, pos;
    scanf("%d %d", &city, &pos);

    int save[101];
    for(int i=0; i<city; i++) scanf("%d", &save[i+1]);

    int increment = 1;
    int result=0;

    if(save[pos]) result++;

    while(1) {

        int checkPosRight = increment+pos;
        int checkPosLeft = pos-increment;

        if( checkPosLeft < 1 && checkPosRight > city) {
            printf("%d\n", result);
            break;
        }
        else if( checkPosLeft < 1 ) {
            if(save[checkPosRight]) result++;
        }
        else if(checkPosRight > city) {
             if(save[checkPosLeft]) result++;
        }
        else {
            if(save[checkPosLeft] && save[checkPosRight]) result += 2;
        }

        increment++;

    }

    return 0;
}
