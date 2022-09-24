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

int cmp[30];
void solve(){
    int i,j,k;
    string s; cin >> s;
    for(i=0; i<s.size(); i++){
        cmp[s[i]-'a']++;
    }
    for(i=0; i<26; i++) cout << cmp[i] << ' ';
}

int main() {
    FASTIO
    solve();
}