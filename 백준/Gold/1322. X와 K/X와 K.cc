#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ldb;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;
typedef tuple<int, int, int> tiii;
#define FASTIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define TEST int tt; cin >> tt; while(tt--) solve();


void solve(){
    int i,j,k;
    ll a,b;
    cin >> a >> b;
    ll bit = 0;
    bit |= a;
    int plag = 0;
    int c = a;
    int idx = 0;
    for(i=0; i<32; i++){
        while(a&(1<<idx)) {
            a &= ~(1 << idx);
            plag++;
            idx++;
        }
        bit |= (b & (1<<i)) << plag;
        idx++;
    }
    bit -= c;
    cout << bit;
}

int main(){
    FASTIO
    solve();
}