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
    int x,sum = 0; 
    for(i=0; i<5; i++){
        cin >> x;
        sum += x*x;
    }
    cout << sum % 10; 
}
int main() {
    FASTIO
    solve();
}
