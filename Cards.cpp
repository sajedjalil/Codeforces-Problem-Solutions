#include <bits/stdc++.h>
#define endl "\n"
#define limit 101

using namespace std;

int main (void) {
    ios::sync_with_stdio(0);

    int n;
    cin>>n;

    int save[limit];
    for(int i=0; i<n; i++) cin>>save[i];

    int sum = 0;
    for(int i=0; i<n; i++) sum += save[i];

    int avg = sum/(n/2);

    for(int i=0; i<n/2 ; i++) {
        int temp;
        for(int j=0; j<n; j++) {


            if(save[j] != -1) {
                cout<<j+1<<' ';
                temp = save[j];
                save[j] = -1;
                break;

            }
        }

        for(int j=0; j<n; j++) {

            if(save[j] != -1 && (avg-temp) ==save[j]) {
                cout<<j+1<<endl;
                save[j] = -1;
                break;
            }
        }

    }


    return 0;
}
