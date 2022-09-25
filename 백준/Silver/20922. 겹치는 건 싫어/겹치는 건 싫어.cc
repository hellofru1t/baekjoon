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

int arr[200005];
int cmp[100005];
map<int, int> mp;
void solve(){
    int i,j,k;
    int n;
    cin >> n >> k;
    for(i=0; i<n; i++) cin >> arr[i];

    int ans = 0;
    int e,s , cnt;
    e = s = cnt = 0;
    while(e < n){
        cnt++;
        cmp[arr[e]]++;
        if(cmp[arr[e]] > k){
            while(cmp[arr[e]] > k){
                cmp[arr[s]]--;
                s++;
                cnt--;
            }
        }
        e++;
        ans = max(ans, cnt);
    }
    cout << ans;
}

int main(){
    FASTIO
    solve();
}