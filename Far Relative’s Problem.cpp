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

beg{
ll n,i,j,r=0,c=0,val=0,t1,t2,s1=0,s2=0,ma=0,ult=0,tem=0;
vector<pair<ll,ll> > f,m;
cin>>n;
char a;
ll dm[367],df[367];
clr(dm);
clr(df);
fo(i,n){
    cin>>a>>t1>>t2;
    if(a=='M'){
        for(j=t1;j<=t2;j++){
            dm[j]++;
        }
    }
    else if(a=='F'){
        for(j=t1;j<=t2;j++){
            df[j]++;
        }
    }
}

for(i=1;i<=366;i++){
    tem = 2*min(dm[i],df[i]);
    if(tem>ult){
        ult = tem;
    }
}
cout<<ult;
ret;
}
