#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

int main (void) {
    int n;
    cin>>n;

    int h[50]= {};
    int v[50]= {};

    for(int i=1; i<=n*n; i++) {
        int a,b;
        cin>>a>>b;

        if(!h[a-1] && !v[b-1]) {
            cout<<i<<' ';
            h[a-1]=1;
            v[b-1]=1;
        }
    }
    cout<<endl;

    return 0;
}
