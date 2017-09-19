#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked

#define ll long long
#define ld long double

typedef pair<int, int>	pi;
typedef pair<ll, ll>	pll;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pi>		vpi;
typedef vector<pll>		vpll;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;

#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)

#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define slen(s) strlen(s)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define boostIO ios_base::sync_with_stdio(false), cin.tie(0)
#define tc(t) ll t; cin >> t; while(t--)
#define PI 3.1415926535897932384626
#define beg int main()
#define ret return 0
#define bye exit(0)
#define nxl <<endl
#define show cout<<
# define INF 0x3f3f3f3f
ll GCD(ll a,ll b){
    if(b==0){
        return a;
    }
    else{
        return GCD(b,a%b);
    }
}

//ll bin_ser(ll low,ll high,ll key){
//
//    while(low<=high){
//        ll mid = (low+high)/2;
//        if(v1[mid]<key){
//            low = mid+1;
//        }
//        else if(v1[mid]>key){
//            high = mid-1;
//        }
//        else{
//            return (mid+1);
//        }
//    }
//    return -1;
//}

bool yoyo(const pll a1 ,const pll a2){
    return (a1.F) > (a2.F);
}


beg{
ll t,a,b,n,i,j;
cin>>n;
vl v1;
ll ma=0;
map<ll,ll> m1;
map<ll,pll> ind;
ll tel;
fo(i,n){
    cin>>a;
    m1[a]++;
    if(m1[a]>ma){
        v1.clear();
        ma = m1[a];
        tel = a;
        v1.pb(a);
    }
    else if(m1[a]==ma){
        v1.pb(a);
    }

    if(ind[a].F==0){
        ind[a].F = i+1;
        ind[a].S = i+1;
    }
    else{
        ind[a].S = i+1;
    }
}
ll mi = LLONG_MAX;
tel =-1;
fo(i,v1.size()){
    if(abs(ind[v1[i]].F-ind[v1[i]].S)<mi){
        tel = i;
        mi = abs(ind[v1[i]].F-ind[v1[i]].S);
    }
//    cout<<ind[v1[i]].F<<" "<<ind[v1[i]].S<<endl;
}
//bye;
cout<<ind[v1[tel]].F<<" "<<ind[v1[tel]].S;


ret;
}
