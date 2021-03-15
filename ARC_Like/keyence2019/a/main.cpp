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

    vector<int>n(4);
    vector<bool>m(4);
    rep(i,4)cin>>n[i];
    rep(i,4){
        if(n[i]==1)m[0]=true;
        if(n[i]==9)m[1]=true;
        if(n[i]==7)m[2]=true;
        if(n[i]==4)m[3]=true;
    }
    bool flag=true;
    rep(i,4)if(m[i]==false)flag=false;
    if(flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}

