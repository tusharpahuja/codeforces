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

ll n,i,a,b,res=0;
vector<pair<ll,ll> > v1;

void give(ll v){
    if(v1[v].F == v1[v-1].F  && v1[v].S > v1[v-1].S &&  v1[v+1].F < v1[v].F)res++;
    else if(v1[v].F == v1[v-1].F  && v1[v].S < v1[v-1].S &&  v1[v+1].F > v1[v].F)res++;
    else if(v1[v].S == v1[v-1].S  && v1[v].F < v1[v-1].F &&  v1[v+1].S < v1[v].S)res++;
    else if(v1[v].S == v1[v-1].S  && v1[v].F > v1[v-1].F &&  v1[v+1].S > v1[v].S)res++;
}

beg{
cin>>n;

fo(i,n+1){
    cin>>a>>b;
    v1.pb({a,b});
}

for(i=1;i<n;i++){
    give(i);
}
cout<<res;



ret;
}






