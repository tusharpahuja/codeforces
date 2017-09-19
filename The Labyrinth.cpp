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

char gr[1005][1005];
ll vis[1005][1005];
ll ind,siz[1000005],n,m;

void dfs(ll x,ll y){
    vis[x][y] = ind;
    siz[ind]++;
    ll x1 = x-1;
    ll x2 = x+1;
    ll y1 = y+1;
    ll y2 = y-1;
    if(x1>=0 && vis[x1][y]==-1 && gr[x1][y]=='.'){
        dfs(x1,y);
    }
    if(x2<n && vis[x2][y]==-1 && gr[x2][y]=='.'){
        dfs(x2,y);
    }
    if(y1<m && vis[x][y1]==-1 && gr[x][y1]=='.'){
        dfs(x,y1);
    }
    if(y2>=0 && vis[x][y2]==-1 && gr[x][y2]=='.'){
        dfs(x,y2);
    }
}


beg{
ll t,a,b,c,d,i,j;
cin>>n>>m;

fo(i,n){
    fo(j,m){
        cin>>gr[i][j];
        vis[i][j] = -1;
    }
}

ind=0;
fo(i,n){
    fo(j,m){
        if(vis[i][j]==-1 && gr[i][j]=='.'){
            siz[ind] = 0;
            dfs(i,j);
            ind++;
        }
    }
}

fo(i,n){
    fo(j,m){
        if(gr[i][j]=='*'){
            ll x1 = i-1;
            ll x2 = i+1;
            ll y1 = j+1;
            ll y2 = j-1;
            set<ll> s1;
            set<ll>::iterator it;
            if(x1>=0 && gr[x1][j]=='.'){
                //dfs(x1,y);
                s1.insert(vis[x1][j]);
            }
            if(x2<n && gr[x2][j]=='.'){
                //dfs(x2,y);
                s1.insert(vis[x2][j]);
            }
            if(y1<m && gr[i][y1]=='.'){
                //dfs(x,y1);
                s1.insert(vis[i][y1]);
            }
            if(y2>=0 && gr[i][y2]=='.'){
                //dfs(x,y2);
                s1.insert(vis[i][y2]);
            }
            ll su=1;
            it = s1.begin();
            while(it!=s1.end()){
                su += siz[*it];
                it++;
            }
            cout<<su%10;
        }
        else cout<<gr[i][j];
    }
    cout<<endl;
}

ret;
}


