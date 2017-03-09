#include<iostream>
#include<stdlib.h>
#include<algorithm>
#include<string.h>
using namespace std;

int main(){
int n[4],i,j,k=0,choices=0,k1,k2,g1,g2;
char s[100];
int t=4,c1[4],c2[4];
while(t--){
    cin>>s;
    n[k] = strlen(s)-2;
    k++;
}

for(i=0;i<4;i++){
    choices=0;
    for(j=0;j<4;j++){
        if(i!=j){
            if(2*n[i]<=n[j])choices++;
        }
    }
    if(choices==3){
        c1[i]=1;
    }
    else{
        c1[i]=0;
    }
}
for(i=0;i<4;i++){
    choices=0;
    for(j=0;j<4;j++){
        if(i!=j){
            if(2*n[j]<=n[i])choices++;
        }
    }
    if(choices==3){
        c2[i]=1;
    }
    else{
        c2[i]=0;
    }
}
k1=0;
for(i=0;i<4;i++){
    if(c1[i]==1)k1++;
}

k2=0;
for(i=0;i<4;i++){
    if(c2[i]==1)k2++;
}
if(k1==1&&k2==1){
    cout<<'C';
}
else if(k1==1){
    if(c1[0]==1){
        cout<<'A';
    }
    else if(c1[1]==1){
        cout<<'B';
    }
    else if(c1[2]==1){
        cout<<'C';
    }
    else if(c1[3]==1){
        cout<<'D';
    }
}
else if(k2==1){
    if(c2[0]==1){
        cout<<'A';
    }
    else if(c2[1]==1){
        cout<<'B';
    }
    else if(c2[2]==1){
        cout<<'C';
    }
    else if(c2[3]==1){
        cout<<'D';
    }
}
else if(k1!=1&&k2!=1){
    cout<<'C';
}
else{
    cout<<'C';
}
return 0;
}
