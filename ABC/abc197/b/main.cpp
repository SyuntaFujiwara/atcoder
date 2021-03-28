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

    int h,w,x,y;
    cin>>h>>w>>x>>y;
    vector<string>s(h);
    rep(i,h)cin>>s[i];
    x--;y--;
    int ans=0;
    for(int i=x+1;;i++){
        if(i>=0&&i<h&&s[i][y]=='.')ans++;
        else break;
    }
    for(int j=x-1;;j--){
        if(j>=0&&j<h&&s[j][y]=='.')ans++;
        else break;
    }
    for(int j=y+1;;j++){
        if(j>=0&&j<w&&s[x][j]=='.')ans++;
        else break;
    }
    for(int j=y-1;;j--){
        if(j>=0&&j<w&&s[x][j]=='.')ans++;
        else break;
    }
    if(s[x][y]=='.')ans++;
    cout<<ans<<endl;

    return 0;
}

