#include <stdio.h>

int main (void) {
	int num;
	int sec[num];
	int i=0;
	int flag=0;
	
	scanf("%d", &num);
	
	for( ;i<num; i++) scanf("%d", &sec[i]);
	
	for(i=1; i<num; i++) {
		if(sec[0]==sec[i]) {
			flag++;
			sec[0]++;
		}
		else if(sec[0]<sec[i]) {
			int temp=sec[i]-sec[0];
			
			if(temp%2) flag+=((temp/2)+1);
			else flag+=(temp/2);
			
			sec[0]+=(flag-sec[0]);
		}
	}
	
	printf("%d\n", flag);

	return 0;
}
