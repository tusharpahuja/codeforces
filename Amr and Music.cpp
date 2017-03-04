#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<vector>

#define FOR(i,n) for(i=0;i<n;i++)
using namespace std;

int main(){
int n,k,i,co=0,it;
cin>>n>>k;
int a[n],t[n];
vector<int> v;
FOR(i,n){
    cin>>a[i];
    t[i] = a[i];
}
//sort(a,a+n);
for(i=0;i<n;i++){
    it = min_element(a,a+n) - a;
    if(a[it]<=k){
        k -= a[it];
        a[it] = 101;
        v.push_back(it+1);
    }
    else{
        break;
    }
}
cout<<v.size()<<endl;
FOR(i,v.size()){
    cout<<v[i]<<" ";
}
return 0;
}






