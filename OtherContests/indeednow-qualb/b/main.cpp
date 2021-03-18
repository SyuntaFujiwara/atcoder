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

    string s,t;
    cin>>s>>t;
    char a,b;
    int n=s.size();
    for(int i=0;i<n;i++){
        if(s==t){
            cout<<i<<endl;
            return 0;
        }
        a=s[n-1];
        s.erase(n-1,1);
        s=a+s;
    }
    cout<<-1<<endl;

    return 0;
}

