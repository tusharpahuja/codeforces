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
vpll vp;
vpll vn;
fo(i,n){
    cin>>a>>b;
    if(a>0){
        vp.pb({a,b});
    }
    else{
        vn.pb({a,b});
    }
}
sort(all(vp));
sort(all(vn),yoyo);
//fo(i,vp.size()){
//    cout<<vp[i].F<<" "<<vp[i].S<<endl;
//}
//cout<<"___"<<endl;
//fo(i,vn.size()){
//    cout<<vn[i].F<<" "<<vn[i].S<<endl;
//}
//bye;
ll m1=0,m2=0;
ll dir=0;
ll ind1,ind2;
ind1 = 0;
ind2=0;
while(1){
    if(!dir){
        if(ind1>=vp.size()){
            break;
        }
        m1+=vp[ind1].S;
//        cout<<vp[ind1].S<<endl;
        ind1++;
    }
    else{
        if(ind2>=vn.size()){
            break;
        }
        m1+=vn[ind2].S;
//        cout<<vn[ind2].S<<endl;
        ind2++;
    }
    dir = !dir;
}
//cout<<"____"<<endl;
dir=1;
ind1 = 0;
ind2=0;
while(1){
    if(!dir){
        if(ind1>=vp.size()){
            break;
        }
        m2+=vp[ind1].S;
//        cout<<vp[ind1].S<<endl;
        ind1++;
    }
    else{
        if(ind2>=vn.size()){
            break;
        }
        m2+=vn[ind2].S;
//        cout<<vn[ind2].S<<endl;
        ind2++;
    }
    dir = !dir;
}
cout<<max(m1,m2);
ret;
}
