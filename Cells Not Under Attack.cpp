#include <bits/stdc++.h>
#define endl "\n"
#define limit 100001

using namespace std;

bool row[limit], col[limit];

int main (void) {
    ios::sync_with_stdio(0);

    long long int n,m;
    cin>>n>>m;

    long long int totalRemaining = n*n;
    long long int rowC=0, colC =0;


    for(int i=0; i<m; i++) {

        int x, y;
        cin>>x>>y;

        if(row[x-1] == false) {

            row[x-1] = true;
            totalRemaining -= (n-colC);
            rowC++;
        }


        if(col[y-1] == false) {
            col[y-1] = true;
            totalRemaining -= (n-rowC);
            colC++;
        }


        cout<<totalRemaining<<' ';

    }
    cout<<endl;

    return 0;
}
