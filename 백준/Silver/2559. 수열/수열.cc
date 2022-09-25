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

int arr[100005];
void solve(){
    int i,j,k;
    int n; cin >> n >> k;
    for(i=0; i<n; i++) cin >> arr[i];
    int sum = 0;
    for(i=0; i<k; i++) sum += arr[i];
    int ans = sum;
    int s,e;
    s=0,e=k;
    while(e < n){
        sum -= arr[s++];
        sum += arr[e++];
        ans = max(ans,sum);
    }
    cout << ans;
}

int main() {
    FASTIO
    solve();
}