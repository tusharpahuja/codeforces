#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
int i,j,n,m,right=1;
cin>>n>>m;
for(i=0;i<n;i++){
    if(i%2==0){
        for(j=0;j<m;j++){
            cout<<'#';
        }
    }
    else{
        if(right==1){
            for(j=0;j<m-1;j++){
                cout<<'.';
            }
            cout<<'#';
            right=0;
        }
        else{
            cout<<'#';
            for(j=0;j<m-1;j++){
                cout<<'.';
            }
            right=1;
        }
    }
    cout<<endl;
}
return 0;
}
