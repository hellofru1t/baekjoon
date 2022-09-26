#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ldb;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;
#define FASTIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define TEST int tt; cin >> tt; while(tt--) solve();

void solve(){
    int i,j,k;
    int n;  cin >> n;
    int at,bt,as,bs;
    int h,m,sh,sm;
    at=bt=as=bs=0;

    
    for(i=0;i<n; i++){
        int team;  cin >> team;
        char tmp; cin >> h >> tmp >> m;
        if(i){
            if(as > bs) at +=((h-sh))*60 +(m-sm);
            else if(as < bs){
                bt +=((h-sh))*60 +(m-sm);
            }
        }
        team == 1 ? as++ : bs++;
        
        sh = h;
        sm = m;
        if(i == n-1){
            if(as > bs) at +=((48-sh))*60-m;
            else if(as < bs){
                bt +=((48-sh))*60-m;
            }
        }
    }
    at/60 < 10 ? cout << 0 << at/60 << ':' : cout << at/60 << ':';
    at%60 < 10 ? cout << 0 << at%60 << '\n' : cout << at%60 << '\n';
    bt/60 < 10 ? cout << 0 << bt/60 << ':' : cout << bt/60 << ':';
    bt%60 < 10 ? cout << 0 << bt%60 : cout << bt%60;
}

int main() {
    FASTIO
    solve();
}