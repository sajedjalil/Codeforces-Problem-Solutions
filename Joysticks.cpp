#include <iostream>
#include <algorithm>

using namespace std;

int main (void) {

    int num1, num2;
    cin>>num1>>num2;

    int counter = 0;

    while(num1>0 && num2>0) {

        if(num1==1 && num2==1) break;

        counter++;
        if(num1>num2) swap(num1,num2);
        num1++;
        num2-=2;
    }

    cout<<counter<<endl;

    return 0;
}
