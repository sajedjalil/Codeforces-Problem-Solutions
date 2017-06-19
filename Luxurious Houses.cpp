#include <iostream>

using namespace std;

int main (void) {
	int total;
	cin>>total;
	
	int *input = new int [total];
	int *save = new int [total];
	
	for(int i=0; i<total; i++) cin>>input[i];
	
	save[total-1]=0;
	int highest = input[total-1];
	for(int i=total-2 ; i>-1 ; i--) {
		
		if(input[i]>highest) {
			highest=input[i];
			save[i]=0;
		}
		else {
			save[i]= highest-input[i]+1;
		}
	}
	
	for(int i=0; i<total; i++) cout<<save[i]<<' ';
	cout<<endl;
	
	delete [] save;
	delete [] input;
	return 0;
}
