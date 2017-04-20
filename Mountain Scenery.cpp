#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<vector>
#include<map>
#include<string.h>
using namespace std;

int main(){
long long n,k,i,temp;
cin>>n>>k;
vector<long long> v,a;
for(i=0;i<(2*n+1);i++){
    cin>>temp;
    v.push_back(temp);
}
i=1;
while(k>0){
    if((v[i]>v[i-1]+1)&&(v[i]>v[i+1]+1)){
        v[i]--;
        k--;
    }
    i += 2;
}
for(i=0;i<v.size();i++){
    cout<<v[i]<<" ";
}
return 0;
}






