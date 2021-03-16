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

    int y;
    cin>>y;
    bool flag=false;
    if(y%4==0)flag=true;
    if(y%100==0)flag=false;
    if(y%400==0)flag=true;
    if(flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}

