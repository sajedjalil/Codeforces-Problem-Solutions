#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    string s;
    map<char, int> save;

    cin>>n>>s;

    int l = 0;
    int minimum = 99999999;

    for(int i=0; i<n; i++) {

        save[s[i]]++;
        int m = save[s[i]];

        while(save[s[l]] > 1) {

            save[s[l]]--;
            l++;
        }

        if( m == 1) minimum = i-l+1;
        else minimum = min(minimum, i-l+1);

    }

    cout<<minimum;

    return 0;
}
