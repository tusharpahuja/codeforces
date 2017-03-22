#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
int n,i,a[7],day=0,temp;
cin>>n;
for(i=0;i<7;i++){
    cin>>a[i];
}
temp=n;
while(temp>0){
    temp = temp - a[day];
    day = (day+1)%7;
}
if(day==0){
    cout<<7;
    exit(0);
}
cout<<(day);

return 0;
}
