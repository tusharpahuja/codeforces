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
ll n,i,j,k,mi=1e9,ma=0,one,two;
cin>>n;
ll a[n];
fo(i,n){
    cin>>a[i];
}
sort(a,a+n);
for(i=0;i<n-2;i++){
    if(a[i]+a[i+1]>a[i+2] && a[i]+a[i+2]>a[i+1] && a[i+2]+a[i+1]>a[i]){
        cout<<"YES";
        bye;
    }
}
cout<<"NO";
ret;
}
