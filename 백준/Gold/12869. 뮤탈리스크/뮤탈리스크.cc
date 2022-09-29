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

int INF = 0x3f3f3f3f;
int scv[5];
int dp[65][65][65];
int ans;
void dfs(int a, int b, int c,int cnt){
    if(cnt > ans) return;
    a = max(a,0); b = max(b,0); c = max(c,0);
    if(dp[a][b][c] > 0 && a+b+c != 0) return;
    else dp[a][b][c] = cnt;
    if(a+b+c == 0){
        ans = min(ans,cnt);
        return;
    }
    if(a && b) dfs(a - 9 , b - 3 , c - 1, cnt+1);
    if(a) dfs(a - 9, b -1 , c - 3, cnt+1);
    if(b && a) dfs(a - 3 , b - 9 , c - 1 , cnt+1);
    if(b) dfs(a - 1 , b - 9,c - 3 , cnt+1);
    if(c && a) dfs(a - 3 , b - 1 , c- 9, cnt+1);
    if(c) dfs(a -1 , b - 3 , c - 9 , cnt+1);
}
void solve(){
    int i,j,k;
    int n; cin >> n;
    ans = 19;
    for(i=0; i<n; i++) cin >> scv[i];
    dfs(scv[0],scv[1], scv[2],0);
    cout << ans;
}

int main(){
    FASTIO
    solve();
}