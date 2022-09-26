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
    int n;
    while(cin >> n){
        int tmp = 0;
        for(i=1; i<=n; i++){
            tmp = tmp*10+1;
            tmp%=n;
            if(!tmp){
                cout << i << '\n'; break;
            }
        }
    }
}

int main() {
    FASTIO
    solve();
}