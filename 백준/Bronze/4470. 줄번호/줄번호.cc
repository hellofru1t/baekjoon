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
    int n; cin >> n;
    cin.ignore();
    for(i=1; i<=n; i++){
        cout << i << ". ";
        string s;
        getline(cin, s);
        cin.clear(); 
        cout << s << '\n';
    }
}
int main() {
    FASTIO
    solve();
}