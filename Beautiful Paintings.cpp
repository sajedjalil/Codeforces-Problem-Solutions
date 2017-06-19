#include <iostream>
#define limit 1001
using namespace std;

int save[limit];    //initialized to 0

int result(int &total) {

    int counter = 0;
    bool flag = true;

    while(flag == true) {
        flag = false;

        for(int i=1; i<limit; i++) {

            if( save[i] != 0  && flag == false)   {

                flag = true;
                save[i]--;
            }
            else if( save[i] !=0) {
                save[i]--;
                counter++;
            }
        }
    }

    return counter;
}

int main (void) {

    int total;
    cin>>total;

    int temp;
    for(int i=0; i<total; i++) {

        cin>>temp;
        save[temp]++;

    }

    cout<<result(total)<<endl;


    return 0;
}
