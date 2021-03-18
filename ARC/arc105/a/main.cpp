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

    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a==b+c+d)cout<<"Yes"<<endl;
    else if(b==a+c+d)cout<<"Yes"<<endl;
    else if(c==b+a+d)cout<<"Yes"<<endl;
    else if(d==b+c+a)cout<<"Yes"<<endl;
    else if(a+b==c+d)cout<<"Yes"<<endl;
    else if(a+c==b+d)cout<<"Yes"<<endl;
    else if(a+d==c+b)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    return 0;
}

