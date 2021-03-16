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
    cout<<fixed<<setprecision(12);

    int n,k;
    cin>>n>>k;
    vector<int>p(n);
    rep(i,n)cin>>p[i];
    int sum=0;
    for(int i=0;i<k;i++){
        sum+=p[i];
    }
    int max_sum=sum;
    for(int i=1;i<n-k+1;i++){
        sum-=p[i-1];
        sum+=p[i+k-1];
        chmax(max_sum,sum);
    }
    max_sum+=k;
    double ans=(double)max_sum/2;
    cout<<ans<<endl;

    return 0;
}

