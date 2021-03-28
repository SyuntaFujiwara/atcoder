#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
using Graph = vector<vector<int>>;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
ll binary(ll bina){
    ll ans=0;
    for(int i=0;bina>0;i++){
        ans=ans+(bina%2)*pow(10,i);
        bina=bina/2;
    }
    return ans;
}
int main(int argc, const char * argv[]) {	
    cin.tie(0);
    ios::sync_with_stdio(false);
    cout<<fixed<<setprecision(15);

    ll n;
    cin>>n;
    vector<ll>a(n);
    rep(i,n)cin>>a[i];
    vector<ll>cnt(50);
    for(int i=0;i<n;++i){
        ll bin=binary(a[i]);
        for(int j=0;bin>0;j++){
            if(bin%10==1)cnt[j]++;
            bin/=10;
        }
    }
    ll ans=0;
    for(ll i=0;i<cnt.size();i++){
        ll sum=(ll)pow(2,i);
        if(cnt[i]==1)ans+=sum;
        cout<<sum<<endl;
    }
    cout<<ans<<endl;

    return 0;
}

