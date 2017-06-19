#include <bits/stdc++.h>
#define endl "\n"
#define limit 1001

using namespace std;

char save[limit][limit];
int row[limit] , col[limit];
int total;

int main() {

    ios::sync_with_stdio(0);

    int n, m;
    cin>>n>>m;

    for(int i=0; i<n; i++) cin>>save[i];


    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {

            if(save[i][j] == '*') {
                row[i]++;
                col[j]++;
                total++;
            }
        }
    }



    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {

            if(save[i][j] == '*' && (row[i]+col[j] -1) == total) {

                cout<<"YES"<<endl<<i+1<<' '<<j+1;
                return 0;
            }
            else if(save[i][j] == '.' && (row[i]+col[j]) == total) {
                cout<<"YES"<<endl<<i+1<<' '<<j+1;
                return 0;
            }

        }
    }

    if(!total) cout<<"YES\n1 1\n";
    else cout<<"NO\n";

    return 0;
}
