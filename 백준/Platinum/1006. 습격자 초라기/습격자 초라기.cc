#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ldb;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;
#define FASTIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define TEST int tt; cin >> tt; while(tt--) solve();

int MOD = 1000000007;
ll MOD2 = 998244353;
int INF = 0x3f3f3f3f;


int e[10005][2],a[10001], b[10001], c[10001];
int n,w;
void dp(int s) {
    for (int i = s; i < n; i++) {
        a[i+1] = min(b[i] + 1, c[i] + 1);
        if (e[i][0] + e[i][1] <= w)
            a[i+1] = min(a[i+1], a[i] + 1);
        if (i > 0 && e[i-1][0] + e[i][0] <= w && e[i-1][1] + e[i][1] <= w)
            a[i+1] = min(a[i+1], a[i-1] + 2);
        if (i < n-1) {
            b[i+1] = a[i+1] + 1;
            if (e[i][0] + e[i+1][0] <= w)
                b[i+1] = min(b[i+1], c[i] + 1);
            c[i+1] = a[i+1] + 1;
            if (e[i][1] + e[i+1][1] <= w)
                c[i+1] = min(c[i+1], b[i] + 1);
        }
    }
}
void solve(){
    int i,j,k;
    cin >> n >> w;
    int ans = INF;

    for(i=0; i<n; i++) cin >> e[i][0];
    for(i=0; i<n; i++) cin >> e[i][1];
    a[0] = 0; b[0] = c[0] = 1;
    dp(0);
    ans = min(ans, a[n]);
    if (n > 1 && e[0][0] + e[n-1][0] <= w) {
        a[1] = 1;
        b[1] = 2;
        c[1] = e[0][1] + e[1][1] <= w? 1 : 2;
        dp(1);
        ans = min(ans, c[n-1] + 1);
    }

    if (n > 1 && e[0][1] + e[n-1][1] <= w) {
        a[1] = 1;
        b[1] = e[0][0] + e[1][0] <= w? 1 : 2;
        c[1] = 2;
        dp(1);
        ans = min(ans, b[n-1] + 1);
    }

    if (n > 1 && e[0][0] + e[n-1][0] <= w && e[0][1] + e[n-1][1] <= w) {
        a[1] = 0;
        b[1] = c[1] = 1;
        dp(1);
        ans = min(ans, a[n-1] + 2);
    }
    cout << ans << '\n';

}

int main(){
    FASTIO
    TEST
}