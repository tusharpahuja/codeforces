#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<string.h>
#include<vector>
using namespace std;

int main(){
vector<string> a,b,c;
string t1,t2;
int n,m,i,it,l1,l2;
cin>>n>>m;
for(i=0;i<m;i++){
    cin>>t1>>t2;
    a.push_back(t1);
    b.push_back(t2);
}
for(i=0;i<n;i++){
    cin>>t1;
    c.push_back(t1);
}
for(i=0;i<n;i++){
    it = find(a.begin(),a.end(),c[i])-a.begin();
    l1 = strlen(a[it].c_str());
    l2 = strlen(b[it].c_str());
    if(l1>l2){
        cout<<b[it]<<" ";
    }
    else{
        cout<<a[it]<<" ";
    }
}
return 0;
}






