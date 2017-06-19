#include <cstdio>
#include <cstring>
#include <algorithm>

int main (void) {

    char num1[1000006], num2[1000006];
    scanf("%s %s", &num1, &num2);

    int startPosNum1=0, startPosNum2=0;


    int temp=strlen(num1);

    for(int i=0; i<temp; i++) {
        if(num1[i]=='0') startPosNum1++;
        else break;
    }

    int len1 = temp-startPosNum1;



    temp= strlen(num2);
    for(int i=0; i<temp; i++) {
        if(num2[i]=='0') startPosNum2++;
        else break;
    }

    int len2 = temp-startPosNum2;

    //printf("%d %d %d %d",len1, len2 , startPosNum1, startPosNum2 );

    if(len1>len2) putchar('>');
    else if(len1<len2) putchar('<');
    else if(len1==len2) {

        bool flag= true;
        int t1=strlen(num1);
        int t2=strlen(num2);
        for(int i=startPosNum1, j = startPosNum2 ; i<t1  ; i++,j++){

            if(num1[i]==num2[j]) continue;
            else if(num1[i] > num2[j]) {
                putchar('>');
                flag=false;
                break;
            }
            else if(num1[i] < num2[j]) {
                putchar('<');
                flag=false;
                break;
            }


        }
        if(flag==true) putchar('=');

    }



    return 0;
}
