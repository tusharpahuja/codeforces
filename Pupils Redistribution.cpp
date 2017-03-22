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

ll n,i,j,t,a1=0,a2=0,a3=0,a4=0,a5=0,b1=0,b2=0,b3=0,b4=0,b5=0,s=0;
cin>>n;
vl a,b;
fo(i,n){
    cin>>t;
    if(t==1){
        a1++;
    }
    else if(t==2){
        a2++;
    }
    else if(t==3){
        a3++;
    }
    else if(t==4){
        a4++;
    }
    else if(t==5){
        a5++;
    }
    a.pb(t);
}
fo(i,n){
    cin>>t;
    if(t==1){
        b1++;
    }
    else if(t==2){
        b2++;
    }
    else if(t==3){
        b3++;
    }
    else if(t==4){
        b4++;
    }
    else if(t==5){
        b5++;
    }
    b.pb(t);
}
if(((a1+b1)%2!=0)||((a2+b2)%2!=0)||((a3+b3)%2!=0)||((a4+b4)%2!=0)||((a5+b5)%2!=0)){
    cout<<-1;
    bye;
}
s = abs(a1-((a1+b1)/2)) + abs(a2-((a2+b2)/2)) + abs(a3-((a3+b3)/2)) + abs(a4-((a4+b4)/2)) + abs(a5-((a5+b5)/2));
cout<<(s/2);
ret;
}

