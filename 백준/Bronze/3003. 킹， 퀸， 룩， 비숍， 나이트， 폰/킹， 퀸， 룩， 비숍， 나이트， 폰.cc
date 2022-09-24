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
#define MAXN 200005
ll MOD = 1000000007;
ll MOD2 = 998244353;
int INF = 0x3f3f3f3f;

/* , 킹 1개, 퀸 1개, 룩 2개, 비숍 2개, 나이트 2개, 폰 8개
 */

void solve(){
    int i,j,k;
    int arr[10];
    for(i=0; i<6; i++){
        cin >> arr[i];
    }
    cout << 1 - arr[0] << ' ' << 1 - arr[1] << ' ' << 2 - arr[2] << ' ';
    cout << 2 - arr[3] << ' ' << 2 - arr[4] << ' ' << 8 - arr[5];

 }

int main(){
    FASTIO
    solve();
}