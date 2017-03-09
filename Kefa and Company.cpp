#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
using namespace std;

int main(){
long long n,d,i,tot=0,val,j,k1,k2,t;
cin>>n>>d;
long long m[n],s[n],ind=0,pre,ma=0;
pair<long long,long long> p[100000];
for(i=0;i<n;i++){
    cin>>p[i].first>>p[i].second;
}

sort(p,p+n);
pre = ind;
ind++;
tot += p[0].second;

while(ind<n){
    if(abs(p[pre].first-p[ind].first)<d){
        //pre++;
        val = p[ind].second;
        tot = tot + val;
        ind++;
        //cout<<s[ind-1]<<"_________"<<endl;
    }
    else{
        if(tot>ma){
            ma = tot;
        }
        pre++;
        tot -= p[pre-1].second;

    }
}
if(tot>ma){
    ma = tot;
}
cout<<ma;
return 0;
}






