#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<algorithm>
using namespace std;

int main(){
string a;
cin>>a;
int len,i,j,al[27];
len =  strlen(a.c_str());
for(i=1;i<=26;i++){
    al[i] = 0;
}
for(i=0;i<len;i++){
    al[int(a[i])-96]++;
}
for(i=26;i>=1;i--){
    if(al[i]>0){
        for(j=0;j<al[i];j++){
            cout<<char(96+i);
        }
        exit(0);
    }
}
return 0;
}






