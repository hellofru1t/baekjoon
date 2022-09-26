#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ldb;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;
#define fi first
#define se second
#define FASTIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define TEST int tt; cin >> tt; while(tt--) solve();


void solve(){
    int i,j,k;
    int n; cin >> n;
    while(n--){
        int x; cin >> x;
        int cnt = 0;
        if(x < 5) cout << "0\n";
        else{
            for(i=5; i<=x; i*=5){
                cnt += x/i;
            }
            cout << cnt << '\n';
        }
    }
}

int main() {
    FASTIO
    solve();
}