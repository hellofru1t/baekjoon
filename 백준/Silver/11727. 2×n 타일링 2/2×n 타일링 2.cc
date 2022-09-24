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


int DP[1001];
int MOD = 10007;

void solve() {
    int i,j,k;
    int n;
    cin >> n;
    DP[1] = 1;
    DP[2] = 3;
    for(i=3; i<=n; i++){
        DP[i] = (DP[i-1] + DP[i-2] * 2)  % MOD;
    }
    cout << DP[n];
}

int main(){
    FASTIO
    solve();
}