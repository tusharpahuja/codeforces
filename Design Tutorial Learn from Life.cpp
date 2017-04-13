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
ll n,k,i,j,s,cap=0,tot=0,rem;
cin>>n>>k;
vl f;
fo(i,n){
    cin>>rem;
    f.pb(rem);
}
sortall(f);

rem = n;
s = f.size()-1;
while(s>=0){
    if(rem>=k){
        cap = k;
        rem -= k;
        tot += 2*((f[s])-1);
        s -= k;
    }
    else{
        cap = k;
        rem -= k;
        tot += 2*((f[s])-1);
        s -= k;
        //cout<<"B"<<endl;
    }
}
cout<<tot;

ret;
}

//4 2
//50 100 50 100

