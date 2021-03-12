#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;
using ll = long long;
using p = pair<int,int>;
using Graph = vector<vector<int>>;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return 1; } return 0; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return 1; } return 0; }
int main(int argc, const char * argv[]) {	
    cin.tie(0);
    ios::sync_with_stdio(false);
    cout<<fixed<<setprecision(15);

    ll n,X;
    cin>>n>>X;
    deque<ll>x(n);
    rep(i,n)cin>>x[i];
    x.push_front(X);
    vector<int>y;
    for(int i=0;i<n;i++){
        y.push_back(abs(x[i+1]-x[i]));
    }
    ll ans=y[0];
    for(int i=0;i<n;i++){
        ans=gcd(ans,y[i]);
    }
    cout<<ans<<endl;

    return 0;
}

