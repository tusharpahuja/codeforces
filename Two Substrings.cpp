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
#define boostIO ios_base::sync_with_stdio(false), cin.tie(0)
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

bool yoyo(const pair<ll,string> p1 ,const pair<ll,string> p2){
    return p1.first > p2.first;
}

beg{
string s;
ll len,i,j,ab=0,ba=0;
cin>>s;
len = strlen(s.c_str());
i=0;
vl v1,v2;
while(i<len-1){
    if(s[i]=='A' && s[i+1]=='B' ){
        v1.pb(i);
    }
    else if(s[i]=='B' && s[i+1]=='A'){
        v2.pb(i);
    }
    //else{
        i++;
    //}
}
if(v1.size() && v2.size()){
    fo(i,v1.size()){
        fo(j,v2.size()){
            if(abs(v1[i]-v2[j])>=2){
                ab=1;
                break;
            }
        }
    }
    if(ab){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}
else{
    cout<<"NO";
}



ret;
}
