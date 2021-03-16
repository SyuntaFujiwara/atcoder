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

    int n;
    cin>>n;
    if((n/20)%2==0){
        if(n%20!=0)cout<<n%20<<endl;
        else cout<<n%20+1<<endl;
    }
    else{
        if(n%20!=0)cout<<20-n%20+1<<endl;
        else cout<<20<<endl;
    }

    return 0;
}
