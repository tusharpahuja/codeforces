#include<iostream>
#include<vector>
#include<string.h>
#include<math.h>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
long long n,x,i,s=0,te=0;
cin>>n>>x;
long long c[n];
vector<long long> v;
for(i=0;i<n;i++){
    cin>>c[i];
    v.push_back(c[i]);
    te += c[i];
}
sort(c,c+n);
sort(v.begin(),v.end());
for(i=0;i<n;i++){
    s += x*c[i];
    if(x>1){
        x--;
    }
}
cout<<s;
return 0;
}
