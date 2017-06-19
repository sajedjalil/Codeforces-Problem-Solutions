#include <stdio.h>

int main () {

    long long int number, height, procLength;
    long long int temp=0;
    long long int totalTime = 0;
    long long int load = 0;


    scanf("%I64d %I64d %I64d", &number, &height, &procLength);

    while(number--) {

        scanf("%I64d", &temp);

        if(load+temp > height) {

            int key = height - load;
            key = temp - key;

            if( key%procLength ) key += (procLength - (key%procLength));
            totalTime += (key/procLength);

            if(load < key) load = 0;
            else load -= key;
            load += temp;
        }
        else {
            load += temp;
            continue;
        }

    }

    if(load > 0) {

        totalTime += (load/procLength);
        if(load%procLength) totalTime++;
    }

    printf("%I64d\n", totalTime);

    return 0;
}
