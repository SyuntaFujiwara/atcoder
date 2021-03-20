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

    ll n;
    cin>>n;
    string N=to_string(n);
    ll ans=0;
    int flag=0;
    if(N.size()>2){ans+=9;flag=2;}
    if(N.size()>4){ans+=90;flag=4;}
    if(N.size()>6){ans+=900;flag=6;}
    if(N.size()>8){ans+=9000;flag=8;}
    if(N.size()>10){ans+=90000;flag=10;}
    if(N.size()>12){ans+=900000;flag=12;}
    if(flag==0)ans=n/11;
    else if(N.size()%2==0&&n>(ll)pow(10,flag+1)+(ll)pow(10,flag-flag/2)){
        ans+=(n-(ll)pow(10,flag+1)-(ll)pow(10,flag-flag/2))/((ll)pow(10,flag/2+1)+1)+1;
        //for(int i=(int)pow(10,flag+1)+(int)pow(10,flag-1);i<=n;i+=(int)pow(10,flag)+1){
        //   ans++;
        //}
    }
    //cout<<pow(10,flag+1)+pow(10,flag-flag/2)<<endl;
    //cout<<((int)pow(10,flag/2+1)+1)<<endl;
    cout<<ans<<endl;

    return 0;
}

