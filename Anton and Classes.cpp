#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define boostIO ios_base::sync_with_stdio(false), cin.tie(0)
#define PI 3.1415926535897932384626
#define beg int main()
#define ret return 0
#define bye exit(0)
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;
ll GCD(ll a,ll b){
    if(b==0){
        return a;
    }
    else{
        return GCD(b,a%b);
    }
}

bool yoyo(const pair<ll,string> p1 ,const pair<ll,string> p2){
    return p1.first > p2.first;
}

bool yo1(const pair<ll,ll> p1 ,const pair<ll,ll> p2){
    return p1.second < p2.second;
}


beg{
ll n,m,i,j,te,a,b,m1,m2,z=0;
vector<pair<ll,ll> > v1,v2,v3,v4;
cin>>n;
fo(i,n){
    cin>>a>>b;
    v1.pb(mp(a,b));
    v3.pb(mp(a,b));
}
sort(v1.begin(),v1.end(),yo1);
sort(v3.begin(),v3.end());
cin>>m;
fo(i,m){
    cin>>a>>b;
    v2.pb(mp(a,b));
    v4.pb(mp(a,b));
}
sortall(v2);
sort(v4.begin(),v4.end(),yo1);
m1 = (v2[m-1].first-v1[0].second);
m2 = (v3[n-1].first-v4[0].second);
cout<<max(max(m1,m2),z);

ret;
}
