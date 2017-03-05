#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
using namespace std;

int main(){
int n,i,ac=0,cc=0,s,gc=0,tc=0,yo;
cin>>n;
string a;
cin>>a;
int qu[n];
if(n%4!=0){
    cout<<"===";
    exit(0);
}
yo = n/4;
for(i=0;i<n;i++){
    qu[i] = 0;
    if(a[i]=='A'){
        ac++;
    }
    else if(a[i]=='C'){
        cc++;
    }
    else if(a[i]=='G'){
        gc++;
    }
    else if(a[i]=='T'){
        tc++;
    }
    else if(a[i]=='?'){
        qu[i] = 1;
    }
}
if((ac>yo)||(gc>yo)||(cc>yo)||(tc>yo)){
    cout<<"===";
    exit(0);
}
for(i=0;i<n;i++){
    if(a[i]=='?'){
        s = i;
        break;
    }
}
while(ac<yo){
    while(a[s]!='?'){
        s++;
    }
    a[s] = 'A';
    ac++;
}
while(cc<yo){
    while(a[s]!='?'){
        s++;
    }
    a[s] = 'C';
    cc++;
}
while(gc<yo){
    while(a[s]!='?'){
        s++;
    }
    a[s] = 'G';
    gc++;
}
while(tc<yo){
    while(a[s]!='?'){
        s++;
    }
    a[s] = 'T';
    tc++;
}
cout<<a;

return 0;
}






