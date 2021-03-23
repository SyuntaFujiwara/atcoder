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

    string day;
    cin>>day;
    int ans;
    string d[7]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    for(int i=0;i<7;i++){
        if(day==d[i])ans=5-i;
    }
    if(ans<0)ans=0;
    cout<<ans<<endl;

    return 0;
}

