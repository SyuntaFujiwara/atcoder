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

    string s;
    cin>>s;
    int n=s.size();
    for(int i=0;i<n;i++){
        string t=s;
        t.erase(i,n-7);
        if(t=="keyence"){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    if(s=="keyence"){
        cout<<"YES"<<endl;
        return 0;
    }
    cout<<"NO"<<endl;

    return 0;
}

