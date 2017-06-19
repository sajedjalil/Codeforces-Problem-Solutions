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

    int com[1000];
    int save[1000]={};
    for(int i=0; i<n; i++) {
        cin>>com[i];
    }

    int sum=0;
    int check=n;

    int j=-1;
    while(1) {
        for(int i=0; i<n; i++) {
            if(save[i]==0 && com[i]<=sum) {
                save[i]=-1;
                check--;
                sum++;
            }
        }
        j++;
        if(!check) break;

        for(int i=n-1; i>-1 ; i--) {
            if(save[i]==0 && com[i]<=sum) {
                sum++;
                save[i]=-1;
                check--;
            }
        }
        j++;
        if(!check) break;
    }

    cout<<j<<endl;


    return 0;
}
