#include <bits/stdc++.h>
using namespace std;

#define fo(i,n) for(i=0;i<n;i++)
#define ull unsigned long long
#define ll long long
#define pb push_back

#define beg int main()
#define ret return 0
#define bye exit(0)

typedef vector<ll> vl;



beg{
ll l1,l2,i,j;
string a,b;
cin>>a>>b;
l1 = strlen(a.c_str());
l2 = strlen(b.c_str());
if(strcmp(a.c_str(),b.c_str())==0){
    cout<<-1;
}
else{
    cout<<max(l1,l2);
}
ret;
}
