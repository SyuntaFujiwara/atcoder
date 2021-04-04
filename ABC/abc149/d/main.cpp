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

    int n,k;
    cin>>n>>k;
    int r,s,p;
    cin>>r>>s>>p;
    string t;
    cin>>t;
    int ans=0;
    vector<char>hand(n);
    for(int i=0;i<n;i++){
        if(i<k){
            if(t[i]=='r'){
                hand[i]='p';
                ans+=p;
            }
            else if(t[i]=='s'){
                hand[i]='r';
                ans+=r;
            }
            else if(t[i]=='p'){
                hand[i]='s';
                ans+=s;
            }
        }
        else{
            if(t[i]=='r'){
                if(hand[i-k]!='p'){
                    ans+=p;
                    hand[i]='p';
                }
            }
            else if(t[i]=='s'){
                if(hand[i-k]!='r'){
                    ans+=r;
                    hand[i]='r';
                }
            }
            else if(t[i]=='p'){
                if(hand[i-k]!='s'){
                    ans+=s;
                    hand[i]='s';
                }
            }
        }
    }
    cout<<ans<<endl;


    return 0;
}

