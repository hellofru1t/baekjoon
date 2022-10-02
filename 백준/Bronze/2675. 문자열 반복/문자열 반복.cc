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
    int n;
    string s; cin  >> n >> s;
    for(i=0; i<s.size(); i++){
        for(j=0; j<n; j++ ) cout << s[i];
    } cout << '\n';
}
int main() {
    FASTIO
    TEST
}
