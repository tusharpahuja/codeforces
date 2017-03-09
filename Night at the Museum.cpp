#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<math.h>
using namespace std;

int main(){
char a[101],start = 'a';
cin>>a;
int i,len,sum=0;
len = strlen(a);
for(i=0;i<len;i++){
    if(abs((int(a[i]))-(int(start)))>13){
        if((int(a[i]))<110){
            sum += abs((int(a[i]))-(int('a'))) + 1 + abs((int('z'))-(int(start)));
        }
        else{
            sum += abs((int(a[i]))-(int('z'))) + 1 + abs((int('a'))-(int(start)));
        }
    }
    else{
        sum += abs((int(a[i]))-(int(start)));
    }
    start = a[i];
}
cout<<sum;
return 0;
}
