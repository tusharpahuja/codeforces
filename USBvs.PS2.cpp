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
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;

int main(){

ll a,b,c,i,m,te,to=0,p1,p2,k=0;
cin>>a>>b>>c>>m;
vector<pair<ll,string> > v1,v2;
string s;
fo(i,m){
    cin>>te>>s;
    if(strcmp(s.c_str(),"USB")==0)v1.pb(mp(te,s));
    else v2.pb(mp(te,s));
}
sortall(v1);
sortall(v2);

p1 = 0;
p2 = 0;
while(a-- && p1<v1.size()){
    to += v1[p1].F;
    k++;
    p1++;
}

while(b-- && p2<v2.size()){
    to += v2[p2].F;
    k++;
    p2++;
}

while(c-- && (p1<v1.size() || p2<v2.size())){
    if(p1==v1.size()){
        to += v2[p2].F;
        p2++;
    }
    else if(p2==v2.size()){
        to += v1[p1].F;
        p1++;
    }
    else if(v1[p1].F>v2[p2].F){
        to += v2[p2].F;
        p2++;
    }
    else{
        to += v1[p1].F;
        p1++;
    }
    k++;
}
cout<<k<<" "<<to;

return 0;
}

