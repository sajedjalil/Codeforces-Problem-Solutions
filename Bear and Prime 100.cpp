#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

int primes[13] = {2, 3, 5, 7, 11, 13, 17, 19, 21, 23, 29, 31, 37};

int main (void) {

    bool flag = true;
    int counter = 0;
    for(int i=0; i<13; i++) {

        cout<<primes[i]<<endl;
        fflush(stdout);

        string s;
        cin>>s;

        if(s == "yes") {

            counter++;
            if(counter > 0) flag = false;
        }
    }

    if(flag == true) cout<<"prime"<<endl;
    else cout<<"composite"<<endl;

    return 0;
}
