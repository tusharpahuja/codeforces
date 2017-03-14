#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;

int main(){
long long n,i;
cin>>n;
if(n%2!=0){
    cout<<0;
    exit(0);
}
if((n/2)%2==0){
    cout<<(n-((n/2)+2))/2;
}
else{
    cout<<(n-((n/2)+1))/2;
}
return 0;
}



