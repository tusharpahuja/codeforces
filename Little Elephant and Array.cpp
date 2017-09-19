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
#define boostIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define tc(t) ll t; cin >> t; while(t--)
#define PI 3.1415926535897932384626
#define beg int main()
#define ret return 0
#define bye exit(0)
#define nxl <<endl
#define show cout<<
# define INF 0x3f3f3f3f

#define n 100007

#define tot 111111

int block;
int cnt[tot],arr[n],ans[n],fin=0,n1;

struct node{
    int L,R,i;
    bool operator < (const node &b) const {
        if((L / block) == (b.L / block)){
            return R < b.R;
        }
        return L < b.L;
    }
}q[n];

bool cmp(node a,node b){
    int t1 = a.i/block;
    int t2 = b.i/block;
    if(t1 != t2){
        return t1 < t2;
    }
    return a.R<b.R;
}

void add(int num){
    if(num<=n1){
        cnt[num]++;
        if(cnt[num]==num){
            fin++;
        }
        else if(cnt[num]==num+1){
            fin--;
        }
    }
}

void rem(int num){
    if(num<=n1){
        cnt[num]--;
        if(cnt[num]==num-1){
            fin--;
        }
        else if(cnt[num]==num){
            fin++;
        }
    }
}

beg{
boostIO;
int t,i,j,a,l,r,m;
scanf("%d %d", &n1, &m);
block = 330;
fo(i,n1){
    scanf("%d", &arr[i]);
}
fo(i,m){
    scanf("%d %d", &l,&r);
    q[i].L = l-1;
    q[i].R = r-1;
    q[i].i = i;
}
sort(q,q+m);
int currl = 0,currr = 0;
fo(i,m){
    l = q[i].L;
    r = q[i].R;
    while(currl>l){
        add(arr[currl-1]);
        currl--;
    }
    while(currr<=r){
        add(arr[currr]);
        currr++;
    }
    while(currl<l){
        rem(arr[currl]);
        currl++;
    }
    while(currr>r+1){
        rem(arr[currr-1]);
        currr--;
    }
    ans[q[i].i] = fin;
}
fo(i,m){
    printf("%d\n",ans[i]);
}

ret;
}
