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


ll n,k,i,j,t,tot=0,su1=0,su2=0;

vl v1,v2;


ll dif[200000],mo[200000];

vector<pair<ll,ll> > fi,vo,he;

bool yo(const pair<ll,ll> p1,const pair<ll,ll> p2){
    if(p1.first<p2.first){
        return true;
    }
    else if(p1.first==p2.first){
        return (fi[p1.second].first<=fi[p1.second].second);
    }
//    if(p1.first<p2.first ){
//        if(mo[p1.second]==1){
//            return true;
//        }
//
//    }
//    else{
//        return true;
//    }
    return false;
}


beg{

cin>>n>>k;
clr(dif);

fo(i,n){
    cin>>t;
    su1 += 0;
    v1.pb(t);
}

fo(i,n){
    cin>>t;
    su2 += 0;
    v2.pb(t);
}

fo(i,n){
    fi.push_back(mp(v1[i],v2[i]));
}

//sort(fi.begin(),fi.end());


fo(i,n){
    if(fi[i].first>fi[i].second){
        mo[i]=1;
        dif[i] = (fi[i].first-fi[i].second);
    }
    else if(fi[i].first<fi[i].second){
        mo[i]=2;
        dif[i] = (fi[i].first-fi[i].second);
    }
    else if(fi[i].first==fi[i].second){
        mo[i]=3;
        dif[i] = (fi[i].first-fi[i].second);
    }
    vo.pb(mp(dif[i],i));
}

//fo(i,n){
//    cout<<vo[i].first<<" "<<vo[i].second<<endl;
//}
//
//cout<<"___________"<<endl;


sort(vo.begin(),vo.end());

//fo(i,n){
//    cout<<vo[i].first<<" "<<vo[i].second<<endl;
//}




fo(i,n){
    //if(fi[vo[i].second].first>=fi[vo[i].second].second){


        if(k>0){
            tot += fi[vo[i].second].first;
            k--;
        }
        else{
            tot += min(fi[vo[i].second].first,fi[vo[i].second].second);
        }
//    }
//    else{
//        he.pb(fi[vo[i].second]);
//    }
}



//for(i=0;i<he.size();i++){
//    if(he[vo[i].second].first>=fi[vo[i].second].second){
//
//
//        if(k>0){
//            tot += he[vo[i].second].first;
//            k--;
//        }
//        else{
//            tot += min(he[vo[i].second].first,he[vo[i].second].second);
//        }
//
//}


cout<<tot;


//fo(i,n){
//    cout<<fi[vo[i].second].first<<" "<<fi[vo[i].second].second<<endl;
//}

ret;
}
