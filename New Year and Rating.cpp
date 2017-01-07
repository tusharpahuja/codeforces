#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<vector>
#include<string.h>
#include<map>
using namespace std;



int main(){
long long mini=-(1e9);
long long maxi=(1e9);
long long n,i;
cin>>n;
long long c[n],d[n],del;
//del=0;
for(i=0;i<n;i++){
    cin>>c[i]>>d[i];
    if(d[i]==1){
        mini = max(mini,(long long)1900);
    }
    if(d[i]==2){
        maxi = min(maxi,(long long)1899);
    }
    mini += c[i];
    maxi += c[i];
    //cout<<mini<<" "<<maxi<<endl;
}
if(mini>maxi){
    cout<<"Impossible";
}
else if(maxi>(1e9)/2){
    cout<<"Infinity";
}
else{
    cout<<maxi;
}
return 0;
}






