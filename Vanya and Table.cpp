#include<iostream>
#include<vector>
#include<string.h>
#include<map>
#include<algorithm>
using namespace std;

int main(){
int n,x1,x2,y1,y2,sum=0,i;
cin>>n;
for(i=0;i<n;i++){
    cin>>x1>>y1>>x2>>y2;
    sum += (abs(x1-x2)+1)*(abs(y1-y2)+1);
}
cout<<sum;
return 0;
}
