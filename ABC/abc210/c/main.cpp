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

    int n,k;
    cin>>n>>k;
    ll c[n];
    rep(i,n) {
        cin>>c[i];
    }
    map<ll,int> m;
    rep(i,k) {
        m[c[i]]++;
    }
    int ans=m.size();
    rep(i,n-k) {
        m[c[i]]--;
        if(m[c[i]] == 0)m.erase(c[i]);
        m[c[i+k]]++;
        int s = m.size();
        chmax(ans,s);
    }
    cout<<ans<<endl;

    return 0;
}

