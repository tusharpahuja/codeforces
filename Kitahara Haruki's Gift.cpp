#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
using namespace std;

int main(){
int n,i,hun=0,two=0;
cin>>n;
int w[n];
for(i=0;i<n;i++){
    cin>>w[i];
    if(w[i]==100){
        hun++;
    }
    else{
        two++;
    }
}
if((hun%2==0)&&(two%2==0)){
    cout<<"YES";
    exit(0);
}
if((200*two)==(hun*100)){
    cout<<"YES";
    exit(0);
}
if((two%2!=0)&&(((hun*100)%200)==0)&&(hun!=0)){
    cout<<"YES";
    exit(0);
}
cout<<"NO";
return 0;
}

