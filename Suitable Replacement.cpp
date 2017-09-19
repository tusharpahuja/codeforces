#include <bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define ld long double
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
# define INF 0x3f3f3f3f
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

bool yoyo(const ll p1 ,const ll p2){
    return p1 > p2;
}

int tot[1000009];
int doe=0;
int err=0;
int arr[27],co=0;
int i,j;
char s[1000009],t[1000009];

beg{
ss(s);
ss(t);
int l1 = slen(s);
int l2 = slen(t);


fo(i,l1){
    if(s[i]=='?'){
        co++;
    }
    else{
        arr[s[i]-'a']++;
    }
}
//int co1=co;


while(1){
    fo(i,l2){
        if(arr[t[i] - 'a'] > 0){
            arr[t[i] - 'a']--;
        }
        else if(co > 0){
            tot[doe] = t[i];
            doe++;
            co--;
        }
        else{
            err=1;
            break;
        }
    }
    if(err){
        break;
    }
}
i=0;
fo(j,l1){
//    cout<<s[j]<<" ";
    if(s[j]=='?'){
        s[j] = tot[i++];
//
    }

}

ps(s);

ret;
}


