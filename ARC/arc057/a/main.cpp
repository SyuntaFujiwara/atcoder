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

    ll a;
    cin>>a;
    ll k;
    cin>>k;
    ll ans;
    if(k==0){
        ans=2000000000000-a;
        cout<<ans<<endl;
    }
    else{
        ans=a;
        for(ll i=1;;i++){
            ans+=1+ans*k;
            if(ans>=2000000000000){
                cout<<i<<endl;
                return 0;
            }
        }
    }

    return 0;
}

