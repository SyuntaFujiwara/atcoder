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
    int ans=0;
    for(int i=2;i<n;i++){
        bool flag=true;
        for(int j=2;j<sqrt(i)+1;j++){
            if(i%j==0&&i!=2){
                flag=false;
                break;
            }
        }
        if(flag)ans++;
    }
    cout<<ans<<endl;

    return 0;
}

