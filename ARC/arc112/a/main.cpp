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

    int t;
    cin>>t;
    rep(i,t){
        ll l,r;
        ll ans;
        cin>>l>>r;
        ll min_c=l;
        ll max_c=r-l;
        if(min_c>max_c){
            cout<<0<<endl;
        }
        else{
            ans=((2*(r-l+1)-max_c-min_c)*(r-min_c-l+1-r+max_c+l))/2;
            cout<<ans<<endl;
        }
    }

    return 0;
}

