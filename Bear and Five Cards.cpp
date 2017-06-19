#include <cstdio>
#include <algorithm>

using namespace std;

int main (void) {

    int numbers[5];

    for(int i=0; i<5; i++) scanf("%d", &numbers[i]);
    sort(numbers, numbers+5);

    int sum=0;
    for(int i=0; i<5; i++) sum += numbers[i];

    int finalResult = sum;

    for(int i=0; i<4; i++) {

        int tempSum;
        int counter = 0;
        for(int j=i+1; j<5; j++) {
            if(numbers[i] == numbers[j]) counter++;
        }

        if(counter > 1) tempSum = sum - (3*numbers[i]);
        else if(counter == 1) tempSum = sum -(2*numbers[i]);

        if(tempSum < finalResult) finalResult = tempSum;

    }

    printf("%d\n", finalResult);

    return 0;
}
