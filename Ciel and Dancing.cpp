#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<set>
#include<vector>
using namespace std;

int main(){
int n,m,k,i,j;
cin>>n>>m;
int d1[n+1],d2[m+1];
memset(d1,0,sizeof(d1));
memset(d2,0,sizeof(d2));
vector<pair<int,int> > v;
for(i=1;i<=n;i++){
    for(j=1;j<=m;j++){
        if(d1[i]==0 || d2[j]==0){
            v.push_back(make_pair(i,j));
            d1[i] = 1;
            d2[j] = 1;
        }
    }
}
cout<<v.size()<<endl;
for(i=0;i<v.size();i++){
    cout<<v[i].first<<" "<<v[i].second<<endl;
}
return 0;
}
