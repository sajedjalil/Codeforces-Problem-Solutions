#include <stdio.h>

int main (void) {

    int persons, height;
    int personHeight;

    long long int sum = 0;

    scanf("%d %d", &persons, &height);

    while(persons--) {
        scanf("%d", &personHeight);

        if(personHeight > height) sum += 2;
        else sum++;
    }

    printf("%I64d\n", sum);

    return 0;
}
