#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<vector>
#include<map>
#include<string.h>
using namespace std;

int main(){
int n,i,z=0,s=0,k=0,t,pre,tem=0;
cin>>n;
int a[n],d[n];
vector<pair<int,int> > v;
for(i=0;i<n;i++){
    cin>>a[i];
    if(a[i]==0){
        z++;
    }
}

d[0] = a[0];
for(i=1;i<n;i++){
    d[i] = a[i] + d[i-1];
}
t = d[n-1];
if(z==n){
    cout<<"NO";
    exit(0);
}
s=0;
pre=0;
while(s<n){
    tem = a[s];
    while(a[s]==0 || ((t-d[s])==0) || tem==0 ){
        s++;
        tem +=a[s];
        if(s>=n){
            s--;
            break;
        }
    }

    v.push_back(make_pair(pre+1,s+1));
    k++;
    s++;
    pre = s;
    //d[pre] -= d[pre-1];
    tem = 0;
}
cout<<"YES"<<endl;
cout<<k<<endl;
for(i=0;i<v.size();i++){
    cout<<v[i].first<<" "<<v[i].second<<endl;
}
return 0;
}






