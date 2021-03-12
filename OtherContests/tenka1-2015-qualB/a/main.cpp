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

    vector<int>a(20);
    a[0]=100;
    a[1]=100;
    a[2]=200;
    for(int i=3;i<20;i++){
        a[i]=a[i-1]+a[i-2]+a[i-3];
    }
    cout<<a[19]<<endl;

    return 0;
}

