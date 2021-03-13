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

    int a,b,w;
    cin>>a>>b>>w;
    w*=1000;
    int ans_max=w/a;
    if(w%a>(b-a)*ans_max)ans_max=1e9;
    int ans_min=w/b;
    if(w%b!=0)ans_min++;
    if(ans_min*b-w>(b-a)*ans_min)ans_min=-1;
    if(ans_min==-1&&ans_max==1e9){
        cout<<"UNSATISFIABLE"<<endl;
        return 0;
    }
    cout<<ans_min<<" "<<ans_max<<endl;

    return 0;
}

