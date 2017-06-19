#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

int main (void) {

    ios:: sync_with_stdio(0);

    string s;
    cin>>s;

    int len = s.size();
    for(int i=0; i<len; i++) {
        if(s[i] == '.' || s[i] =='e') s[i] = ' ';
    }


    int a,d;
    string b;

    stringstream iss(s);

    iss>>a;
    iss>>b;
    iss>>d;


    len = b.size();

    if(len==1 && b[0] =='0' && !d) len = 0;

    cout<<a;

    if(len < d) {

        cout<<b;
        for(int i=0; i<d-len; i++) cout<<'0';
    }
    else {

        for(int i=0; i<len; i++) {

            if(d==i) cout<<'.';
            cout<<b[i];
        }
    }


    return 0;
}
