#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ldb;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;
#define FASTIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve(){
    int i,j,k;
    ll a,b;
    cin >> a >> b;
    if( a < b ){
        cout << "0";
        return;
    }
    ll diff =  a - b;
    int bit = 0;
    for(i=41; i>=0; i--){
        if(( b & (1LL << i)) ) {
            bit++;
        } else if(diff >= (1LL<<i) * 2){
            diff -=  (1LL<< i) *2;
        }
    }

    ll ans = 0;
    if(!diff) ans |= (1LL << bit);
    if(a == b) ans -= 2LL;
    cout << ans;
}

int main(){
    FASTIO
    solve();
}