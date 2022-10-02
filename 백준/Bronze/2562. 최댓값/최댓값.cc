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
    int x,mx = 0,idx;
    for(i=1; i<=9; i++){
        cin >> x;
        if(mx < x) mx = x , idx = i;
    }
    cout << mx << '\n' << idx;
}
int main() {
    FASTIO
    solve();
}
