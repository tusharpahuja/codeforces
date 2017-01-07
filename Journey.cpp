#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<vector>
#include<map>
#include<string.h>
using namespace std;

int main(){
int n,m,i,j,s1=1,s2=1,d=0;
cin>>n>>m;
if(n==1 && m==1){
    cout<<0<<endl;
    cout<<1<<" "<<1<<endl;
    cout<<1<<" "<<1<<endl;
    exit(0);
}
if(n==1 && m==2){
    cout<<0<<endl;
    cout<<1<<" "<<1<<endl;
    cout<<1<<" "<<2<<endl;
    cout<<1<<" "<<1<<endl;
    exit(0);
}
if(n==2 && m==1){
    cout<<0<<endl;
    cout<<1<<" "<<1<<endl;
    cout<<2<<" "<<1<<endl;
    cout<<1<<" "<<1<<endl;
    exit(0);
}
if(n==1){
    cout<<1<<endl;
    cout<<n<<" "<<m<<" "<<1<<" "<<1<<endl;
    for(i=1;i<=m;i++){
        cout<<1<<" "<<i<<endl;
    }
    cout<<1<<" "<<1;
    exit(0);
}
if(m==1){
    cout<<1<<endl;
    cout<<n<<" "<<m<<" "<<1<<" "<<1<<endl;
    for(i=1;i<=n;i++){
        cout<<i<<" "<<1<<endl;
    }
    cout<<1<<" "<<1;
    exit(0);
}
if(n%2!=0 && m%2!=0){
    cout<<1<<endl;
    cout<<n<<" "<<m<<" "<<1<<" "<<1<<endl;
    for(i=1;i<=n;i++){
        if(d==0){
            for(j=1;j<=m;j++){
                cout<<i<<" "<<j<<endl;
            }
            d=1;
        }
        else{
            for(j=m;j>=1;j--){
                cout<<i<<" "<<j<<endl;
            }
            d=0;
        }
    }
    cout<<1<<" "<<1;
}
else{
    cout<<0<<endl;
    cout<<1<<" "<<1<<endl;
    if(n%2==0){
        s2++;
        for(i=1;i<=n;i++){
            if(d==0){
                for(j=2;j<=m;j++){
                    cout<<i<<" "<<j<<endl;
                }
                d=1;
            }
            else{
                for(j=m;j>=2;j--){
                    cout<<i<<" "<<j<<endl;
                }
                d=0;
            }
        }
        for(i=n;i>=1;i--){
            cout<<i<<" "<<1<<endl;
        }
    }
    else{
        s2++;
        for(i=1;i<=m;i++){
            if(d==0){
                for(j=2;j<=n;j++){
                    cout<<j<<" "<<i<<endl;
                }
                d=1;
            }
            else{
                for(j=n;j>=2;j--){
                    cout<<j<<" "<<i<<endl;
                }
                d=0;
            }
        }
        for(i=m;i>=1;i--){
            cout<<1<<" "<<i<<endl;
        }
    }
}
return 0;
}






