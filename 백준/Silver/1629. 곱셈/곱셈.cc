#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ldb;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;
#define FASTIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define TEST int tt; cin >> tt; while(tt--) solve();


ll dnc(ll aa, ll bb, ll cc){
    if(bb == 1) return aa%cc;
    ll k = dnc(aa,bb/2,cc)%cc;
    if (bb&1LL) return k*k%cc*aa%cc; 
    else return k*k%cc;
}

void solve(){
    int i,j,k;
    ll a,b,c;
    cin >> a >> b >> c;
    cout << dnc(a,b,c);
}

int main() {
    FASTIO
    solve();
}