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

    string a,b;
    cin>>a>>b;
    string A=a,B=b;
    int ans=-1e9;
    chmax(ans,stoi(A)-stoi(B));
    for(int i=0;i<3;i++){
        A[i]='9';
        chmax(ans,stoi(A)-stoi(B));
        if(i==0)A[i]='1';
        else A[i]='0';
        chmax(ans,stoi(A)-stoi(B));
        A=a;
        if(i==0)B[i]='1';
        else B[i]='0';
        chmax(ans,stoi(A)-stoi(B));
        B[i]='9';
        chmax(ans,stoi(A)-stoi(B));
        B=b;
    }
    cout<<ans<<endl;

    return 0;
}

