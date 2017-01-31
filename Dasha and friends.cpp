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
ll n,L,i,j,s=0,c=0,val=0,er=0,yo=0;
cin>>n>>L;
ll a[n+1],b[n+1];
vl dif1,dif2;
fo(i,n){
    cin>>a[i];
}
fo(i,n){
    cin>>b[i];
}
fo(i,n-1){
    dif1.push_back(abs(a[i+1]-a[i]));
}
dif1.push_back(abs(L-a[n-1])+a[0]);

fo(i,n-1){
    dif2.push_back(abs(b[i+1]-b[i]));
}
dif2.push_back(abs(L-b[n-1])+b[0]);

//fo(i,n){
//    cout<<dif1[i]<<" "<<dif2[i]<<endl;
//}
s=0;
val=0;
fo(i,n){
    c=0;
    s=val;
    er=0;
    yo=0;
    while(c<n){
        s=s%n;
        if(dif1[s]!=dif2[yo]){
            er=1;
            break;
        }
        s++;
        yo++;
        c++;
    }
    if(er==0){
        cout<<"YES";
        bye;
    }
    val++;

}
cout<<"NO";







ret;
}
