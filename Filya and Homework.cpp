#include<iostream>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<algorithm>
#include<vector>
#include<set>
#include<iomanip>
using namespace std;

int main(){
long long n,i,n1,n2,n3,mi,ma;
cin>>n;
long long a[n];
set<long long> s;
set<long long>::iterator it;
//map<long long,long long> m;
for(i=0;i<n;i++){
    cin>>a[i];
    s.insert(a[i]);
}
if(s.size()<3){
    cout<<"YES";
}
else if(s.size()>3){
    cout<<"NO";
}
else{
    it = s.begin();
    n1 = *it;
    it++;
    n2 = *it;
    it++;
    n3 = *it;
    if(abs(n1-n2)==abs(n2-n3)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
return 0;
}







