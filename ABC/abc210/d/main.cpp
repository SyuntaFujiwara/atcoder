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

    int h,w;
    ll c;
    cin>>h>>w>>c;
    ll a[h][w];
    rep(i,h) {
        rep(j,w) {
            cin>>a[i][j];
        }
    }
    ll ans=1LL<<60;
    rep(i,h) {
        rep(j,w) {
            for(int k = i + 1; k < h; k++) {
                for(int l = j + 1; l < w; l++) {
                    ll sum = a[i][j] + a[k][l] + c * (abs(i - k) + abs(j - l));
                    cout<<i<<" "<<j<<" "<<l<<" "<<k;
                    if(chmin(ans,sum))cout<<"O";
                    cout<<endl;
                }
            }
        }
    }
    cout<<ans<<endl;

    return 0;
}

