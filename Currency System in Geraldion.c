#include <stdio.h>

int main (void) {
	int num;
	int array[1000];
	int i=0;
	int flag=0;
	
	scanf("%d", &num);
	
	for(; i<num; i++) {
		scanf("%d", &array[i]);
		if(array[i]==1) flag=1;;
	}
	
	if(flag) printf("-1\n");
	else printf("1\n");
	
	return 0;
}
