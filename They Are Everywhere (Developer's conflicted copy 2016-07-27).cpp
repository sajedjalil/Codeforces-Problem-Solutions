#include <bits/stdc++.h>
#define endl "\n"
#define limit 130

using namespace std;

int letter[limit];

int main (void) {
    ios::sync_with_stdio(0);

    int n;
    cin>>n;

    string s;
    cin>>s;

    int counter = 0;

    for(int i=0; i<n; i++) {

       letter[s[i]]++;

       if(letter[s[i]] == 1)counter++;

    }

    bool flag = false, flag2= false;

    for(int i=0, j=n-1; i<=j; ) {

        if(letter[s[i]] > 1) {
            letter[s[i]]--;
            i++;

        }
        else if (letter[s[i]] == 1) {
            flag = true;
        }

        if(letter[s[j]] > 1) {
            letter[s[j]]--;
            j--;
        }
        else if (letter[s[j]] == 1) {
            flag2 = true;
        }


        if(flag == true && flag2 == true) {
            cout<<i<<' '<<j<<endl;
            cout<<j-i+1<<endl;
            break;
        }
    }


    return 0;
}
