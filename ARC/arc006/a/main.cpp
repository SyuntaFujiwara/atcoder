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

    string e,l;
    char b;
    rep(i,6)cin>>e[i];
    cin>>b;
    rep(i,6)cin>>l[i];
    vector<bool>flag(6);
    bool flag_b=false;
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            if(l[i]==e[j])flag[j]=true;
        }
        if(l[i]==b)flag_b=true;
    }
    int cnt=0;
    for(int i=0;i<6;i++){
        if(flag[i])cnt++;
    }
    int ans=0;
    if(cnt==6)ans=1;
    else if(cnt==5&&flag_b)ans=2;
    else if(cnt>=3)ans=8-cnt;
    cout<<ans<<endl;

    return 0;
}

