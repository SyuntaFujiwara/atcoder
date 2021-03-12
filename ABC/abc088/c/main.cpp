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

    vector<vector<int>>c(3,vector<int>(3));
    rep(i,3){
        rep(j,3)cin>>c[i][j];
    }
    for(int i=0;i<105;i++){
        vector<int>a(3);
        vector<int>b(3);
        a[0]=i;
        b[0]=c[0][0]-a[0];
        b[1]=c[0][1]-a[0];
        b[2]=c[0][2]-a[0];
        a[1]=c[1][0]-b[0];
        a[2]=c[2][0]-b[0];
        vector<vector<int>>C(3,vector<int>(3));
        rep(I,3){
            rep(J,3)C[I][J]=a[I]+b[J];
        }
        if(c==C){
            cout<<"Yes"<<endl;
            return 0;
        }
    }
    cout<<"No"<<endl;

    return 0;
}

