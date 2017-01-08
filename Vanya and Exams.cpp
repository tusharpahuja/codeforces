#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<vector>
#include<iomanip>
using namespace std;

bool sortf(const pair<long long,long long> &a,const pair<long long,long long> &b){
    return (a.second<b.second);
}

int main(){
long long n,r,avg,i,j,k1,k2,temp,start=0,ans=0;
cin>>n>>r>>avg;
long long t=0,rem;
vector< pair<long long,long long> > a;
for(i=0;i<n;i++){
    cin>>k1>>k2;
    a.push_back(make_pair(k1,k2));
    t += k1;
}
rem = avg*n - t;
t = t/n;
if(rem<=0){
    cout<<0;
    exit(0);
}
else{
    sort(a.begin(),a.end(),sortf);
    start=0;
    while(start<n && rem>0){
        if(r - a[start].first > 0){
            if(r - a[start].first>rem){
                ans += (rem)*a[start].second;
                rem = 0;
            }
            else{
                ans += (r - a[start].first)*a[start].second;
                rem = rem - (r - a[start].first);
            }
        }
        start++;
    }
    cout<<ans;
}
return 0;
}







