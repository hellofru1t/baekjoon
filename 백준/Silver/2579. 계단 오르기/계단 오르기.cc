#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ldb;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;
typedef tuple<int, int, int> tiii;

#define FASTIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define TEST int tt; cin >> tt; while(tt--) solve();


int DP[301];
int arr[302];
void solve() {
    int i,j,k;
    int n; cin >> n;
    for(i=1; i<=n; i++) cin >> arr[i]; 
    DP[1] = arr[1];
    DP[2] = arr[2] + arr[1];
    DP[3] = max(arr[1], arr[2]) + arr[3];

    for(i=4; i<=n; i++){
        DP[i] = max( (arr[i-1] + DP[i-3]), DP[i-2]) + arr[i];
    }
    cout << DP[n];
}

int main(){
    FASTIO
    solve();
}