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

bool yoyo(const char p1 ,const char p2){
    return int(p1) > int(p2);
}

ll vis[500005];
vl edg[500005];
ll colors;
ll colarr[500005];

void dfs(ll ch,ll pa){
    //map<ll,ll> loc;
    //cout<<"A"<<endl;
    ll c=1;
    vis[ch] = 1;
//    cout<<colors<<endl;
    for(ll i=0;i<edg[ch].size();i++){
        //cout<<edg[ch][i]<<" "<<vis[edg[ch][i]]<<endl;
       // cout<<edg[ch][i]<<" "<<c<<endl;
        if(vis[edg[ch][i]]==0 ){
                while(c==colarr[ch] || c==colarr[pa]){
                    c++;
                }
                //cout<<edg[ch][i]<<" "<<c<<endl;
                colarr[edg[ch][i]] = c++;
                dfs(edg[ch][i],ch);
                    //break;


        }
    }

}

beg{
ll t,n,a,b,c,d,i,j;
boostIO;
cin>>n;
fo(i,n-1){
    cin>>a>>b;
    edg[a].pb(b);
    edg[b].pb(a);
}
ll max_deg = 0;
clr(vis);
for(i=1;i<=n;i++){
    max_deg = max(max_deg,(ll)edg[i].size());
}
colors = max_deg+1;
clr(colarr);
colarr[1] = 1;
dfs(1,0);

cout<<colors<<endl;
for(i=1;i<=n;i++){
    cout<<colarr[i]<<" ";
}
ret;
}


