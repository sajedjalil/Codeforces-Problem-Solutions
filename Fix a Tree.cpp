#include <bits/stdc++.h>
#define endl "\n"
#define limit 200001

using namespace std;

int color[limit];
int root;
int save [limit];
vector <int> data[limit];
int changes;

void dfs(int source) {


    color[source] = 1;


    int len = data[source].size();
    for(int i=0; i<len; i++) {

        //fix root
        if(source == data[source][i]) {

            if(root == 0) root = source;
            else if(root != source){
                save[source] = root;
                changes++;
            }

        }
        else if( color[data[source][i]] == 0) {

            dfs(data[source][i]);
        }
        else if( color[data[source][i]] == 1){

            if(root == 0) root = source;
            save[source] = root;
            changes++;

        }
    }

    color[source] = 2;

}

int main (void) {

    ios::sync_with_stdio(0);

    int n;
    cin>>n;

    for(int i=1; i<=n; i++) {

        cin>>save[i];
        data[i].push_back(save[i]);

        if(root == 0 && i==save[i]) root = i;
    }

//    for(int i=1; i<=n; i++) {
//
//        for(int j=0; j<data[i].size(); j++) cout<<data[i][j]<<' ';
//        cout<<endl;
//    }

    for(int i=1; i<=n; i++) {

        if(color[i] == 0 ) dfs(i);

    }

    cout<<changes<<endl;
    for(int i=1; i<=n; i++) cout<<save[i]<<' ';
    cout<<endl;

    return 0;
}
