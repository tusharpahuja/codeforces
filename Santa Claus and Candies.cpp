#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
int n,i;
cin>>n;
vector<int> v;
for(i=1;i<=n;i++){
    v.push_back(i);
    n -= i;
}
v.back() += n;
cout<<v.size()<<endl;
for(i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
return 0;
}




