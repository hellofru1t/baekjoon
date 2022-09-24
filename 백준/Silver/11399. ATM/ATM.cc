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
    int n,x; vector<int> v; cin >> n;
    for(i=0; i<n; i++) cin >> x, v.push_back(x);
    sort(v.begin(),v.end());
    int ans = 0;
    int prefix = 0;
    for(i=0; i<v.size(); i++){
        prefix += v[i];
        ans += prefix;
    }
    cout << ans;
}

int main() {
    FASTIO
    solve();
}