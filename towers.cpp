#include <cstdio>
#include <algorithm>

using namespace std;

int main (void) {
    int total;
    scanf("%d", &total);

    int *save = new int [total];
    for(int i=0; i<total; i++) scanf("%d", &save[i]);

    sort(save, save+total);
    int high=1;
    int flag=save[0];
    int result=1;
    int no=total;

    for(int i=1; i<total; i++) {
        if(flag==save[i]) {
            high++;
            no--;
        }
        else {
            flag=save[i];

            high=1;
        }
        if(result<high) result= high;
    }
    printf("%d %d\n", result, no);

    delete [] save;
    return 0;
}
