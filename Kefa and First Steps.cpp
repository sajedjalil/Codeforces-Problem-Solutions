#include <iostream>

using namespace std;

int main (void) {
	int total;
	
	cin>>total;
	
	int max=1;
	long long int flag=10000000000000;
	int counter=0;
	
	for(int i=0; i<total; i++) {
		long long int temp;
		cin>>temp;
		
		if(temp>=flag) {
			counter++;	
		}
		else {
			counter=1;
		}
		
		flag=temp;
		if(counter>max) max= counter;
	}
	
	cout<<max<<endl;
	
	return 0;
}
