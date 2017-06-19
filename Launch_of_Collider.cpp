#include <bits/stdc++.h>

#define endl "\n"
#define limit 999999999999

using namespace std;

int main (void) {

    ios:: sync_with_stdio(0);

    int n;
    cin>>n;

    string s;
    cin>>s;

    long long int minimum = limit;
    long long int valueR = -limit;

    for(int i=0; i<n; i++) {

        long long int temp;
        cin>>temp;

        if(s[i] == 'R') valueR = temp;
        else {

            if(temp-valueR < minimum) minimum = temp - valueR;
        }

    }

    if(minimum == limit) cout<<-1;
    else cout<<minimum;


    return 0;
}
