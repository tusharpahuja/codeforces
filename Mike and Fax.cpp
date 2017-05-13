#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;

int main(){
char s[1000];
int k,i,j,len,num,error=0,word,f,start,e,ba;
cin>>s;
cin>>k;
len = strlen(s);
if(len%k!=0){
    cout<<"NO";
    exit(0);
}
num = len/k;
start = 0;
word = num;
for(i=0;i<k;i++){
    ba = 0;
    error = 0;
    e = start+(num/2);
    f = start + 0;
    for(j=f;j<e;j++){
        if(s[j]!=s[word-1-ba]){
            error = 1;
        }
        ba++;
    }
    if(error==1){
        cout<<"NO";
        exit(0);
    }
    start += num;
    word += num;
}
cout<<"YES";
return 0;
}
