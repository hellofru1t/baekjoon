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

#define fi first
#define se second

ll MOD = 1000000007;
ll MOD2 = 998244353;
int INF = 0x3f3f3f3f;

stack<pii> st;
int arr[1000005];
int cmp[1000005];
int ans[1000005];
void solve() {
    int i,j,k;
    int n; cin >> n;
    for(i=1; i<=n; i++){
        cin >> arr[i];
        cmp[arr[i]]++;
    }
    for(i=n; i>=1; i--){
        while(!st.empty() && st.top().first <= cmp[arr[i]]){
            st.pop();
        }
        st.empty() ? ans[i] = -1 : ans[i] = st.top().second;
        st.push({cmp[arr[i]],arr[i]});
    }

    for(i=1; i<=n; i++){
        cout << ans[i] << " ";
    }
}

int main(){
    FASTIO
    solve();
}