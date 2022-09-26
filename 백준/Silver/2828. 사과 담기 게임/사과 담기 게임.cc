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
    int n; cin >> n >> k;
    int l = 1; int r = l+k-1;
    int cnt = 0;
    int t; cin >> t;
    while(t--){
        int x; cin >> x;
        if(l <= x && x <= r) continue;
        else if(l > x){
           while(1){
               cnt++;
               l--,r--;
               if(l <= x && x <= r) break;
           }
        }else{
            while(1){
                cnt++;
                l++,r++;
                if(l <= x && x <= r) break;
            }
        }
    }
    cout << cnt;
}

int main() {
    FASTIO
    solve();
}