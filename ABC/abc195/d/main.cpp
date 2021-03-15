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

    int n,m,q;
    cin>>n>>m>>q;
    vector<p>wv(n);
    rep(i,n)cin>>wv[i].first>>wv[i].second;
    sort(wv.begin(),wv.end());
    vector<ll>x(m);
    rep(i,m)cin>>x[i];
    vector<p>lr(q);
    rep(i,q){
        cin>>lr[i].first>>lr[i].second;
        lr[i].first--;
    }
    rep(I,q){
        vector<ll>X;
        vector<p>WV=wv;
        for(int i=0;i<lr[I].first;i++)X.push_back(x[i]);
        for(int i=lr[I].second;i<m;i++)X.push_back(x[i]);
        sort(X.begin(),X.end());
        int ans=0;
        for(int i=0;i<X.size();i++){
            int max_value=0;
            int max_j=1e9;
            for(int j=0;j<n;j++){
                if(X[i]>=WV[j].first){
                    if(chmax(max_value,WV[j].second))max_j=j;
                }
            }
            ans+=max_value;
            if(max_j!=1e9)WV[max_j].first=1e9;
        }
        cout<<ans<<endl;
    }

    return 0;
}

