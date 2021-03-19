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

    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>b(n);
    vector<int>c(n);
    vector<int>d(n);
    vector<int>e(n);
    rep(i,n)cin>>a[i]>>b[i]>>c[i]>>d[i]>>e[i];
    double ans=0;
    rep(i,n)chmax(ans,a[i]+b[i]+c[i]+d[i]+(double)e[i]*110/900);
    cout<<ans<<endl;

    return 0;
}

