#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<string.h>
using namespace std;

int main(){
string a,b,c;
int len1,len2,len3,i,j,done;
cin>>a>>b>>c;
len1 = strlen(a.c_str());
len2 = strlen(b.c_str());
len3 = strlen(c.c_str());
if((len1+len2)!=len3){
    cout<<"NO";
    exit(0);
}
for(i=0;i<len1;i++){
    done = 0;
    for(j=0;j<len3;j++){
        if((a[i]==c[j])&&(done==0)){
            c[j] = '1';
            done = 1;
        }
    }
}
for(i=0;i<len2;i++){
    done = 0;
    for(j=0;j<len3;j++){
        if((b[i]==c[j])&&(done==0)){
            c[j] = '1';
            done = 1;
        }
    }
}
for(i=0;i<len3;i++){
    if(c[i]!='1'){
        cout<<"NO";
        exit(0);
    }
}
cout<<"YES";
return 0;
}






