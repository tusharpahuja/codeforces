#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<algorithm>
#include<vector>
#include<map>
#include<string.h>
using namespace std;

int main(){
int n,m,i,maxi=0,mini=0,temp,it;
cin>>n>>m;
vector<int> v,v1;
for(i=0;i<m;i++){
    cin>>temp;
    v.push_back(temp);
    v1.push_back(temp);
}
temp = n;
while(temp--){
    it = min_element(v.begin(),v.end()) - v.begin();
    mini += v[it];
    v[it]--;
    if(v[it]==0){
        v[it] = 1001;
    }
}
temp = n;
while(temp--){
    it = max_element(v1.begin(),v1.end()) - v1.begin();
    maxi += v1[it];
    v1[it]--;
}
cout<<maxi<<" "<<mini;
return 0;
}






