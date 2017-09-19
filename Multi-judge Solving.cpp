#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define ld long double
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
# define INF 0x3f3f3f3f
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

bool yoyo(const ll p1 ,const ll p2){
    return p1 > p2;
}

beg{

ll k,n,t,i,j,m,a,b,c,su=0,x=0,o=0;
//cin>>k;
cin>>n>>k;
vl v1,v2;
map<ll,ll> m1;
fo(i,n){
    cin>>a;
    v1.pb(a);
    v2.pb(a);
    m1[a]=1;
}
//ll co=0;
//ll maxi=k;
//sort(all(v1),yoyo);
//ll yo = v1[0];
//while(ceil((float)yo/2)>maxi){
//    yo = ceil((float)yo/2);
//    co++;
//    //cout<<yo<<endl;
//}
//cout<<co;
//sort(all(v1),yoyo);
sort(all(v2));
ll maxi = 2*k;

//bye;
ll co=0;
fo(i,n){
    if(v2[i]<=maxi){
        maxi = 2*max(maxi/2,v2[i]);
    }
    else{
        while(v2[i]>maxi){
            co++;
            maxi = maxi*2;
        }
        maxi = 2*max(maxi/2,v2[i]);
    }
}
cout<<co<<endl;

ret;
}


