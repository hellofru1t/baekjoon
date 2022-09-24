#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ldb;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;
typedef tuple<int, int, int> tiii;
#define FASTIO ios::sync_with_stdio(0); cin.tie(0); cout.tie();
#define TEST int tt; cin >> tt; while(tt--) solve();


int dp[1001][3];
void solve(){
    int i,j,k;
    int n;
    int arr[1001][3];
    cin >> n;
    for(i=1; i<=n; i++){
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
    }
    dp[1][0] = arr[1][0];
    dp[1][1] = arr[1][1];
    dp[1][2] = arr[1][2];

    for(i=2; i<=n; i++){
        dp[i][0] = min(dp[i-1][1],dp[i-1][2]) + arr[i][0];
        dp[i][1] = min(dp[i-1][0],dp[i-1][2]) + arr[i][1];
        dp[i][2] = min(dp[i-1][0],dp[i-1][1]) + arr[i][2];
    }
    cout << min(dp[n][0], min(dp[n][1],dp[n][2]));
}
int main(){
    FASTIO
    solve();
}