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
#define ret return 0;
#define bye exit(0);
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

int main(){
ll n,m,z,i,j,n1,m1,c=0;
cin>>n>>m>>z;
vector<ll> s1,s2;
vector<ll>::iterator it;
n1=n;m1=m;
while(n1<=z){
    s1.pb(n1);
    n1+=n;
}
while(m1<=z){
    s2.pb(m1);
    m1+=m;
}
for(i=0;i<s1.size();i++){
    it = find(s2.begin(),s2.end(),s1[i]);
    if(it!=s2.end()){
        c++;
    }
}
cout<<c;



ret;
}
