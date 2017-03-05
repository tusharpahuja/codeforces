#include<iostream>
using namespace std;
#include<stdlib.h>
#include<string.h>

int main(){
long long a,b,i,j,c;
cin>>a>>b>>c;
for(i=0;i*a<=c;i++){
    for(j=0;j*b<=c;j++){
        if((i*a + j*b)==c){
            cout<<"Yes";
            exit(0);
        }
    }
}
cout<<"No";
return 0;
}
