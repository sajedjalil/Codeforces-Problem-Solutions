#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

int main (void) {

    ios:: sync_with_stdio(0);
    long long int t, s, x;
    cin>>t>>s>>x;

    if(x-t == 0 ) cout<<"YES";
    else if(x<t) cout<<"NO";
    else {

        x -= t;

        if(x == 1) cout<<"NO";
        else if(x%s==0 || (x-1)%s ==0) cout<<"YES";
        else cout<<"NO";

    }


    return 0;

}
