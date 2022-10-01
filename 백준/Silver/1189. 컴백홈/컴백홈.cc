#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ldb;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;
#define FASTIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define TEST int tt; cin >> tt; while(tt--) solve();

int n,m,len,ans;
int grid[10][10];
int visited[10][10];
int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};

bool ok(int x, int y){
    return x && y && x <= n && y <= m && !visited[x][y] && !grid[x][y];
}
void dfs(int x, int y){
    if(x == 1 && y == m){
        bool add = visited[x][y] == len;
        ans += add;
        return;
    }
    for(int i=0; i<4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(ok(nx,ny)){
            visited[nx][ny] += visited[x][y] + 1;
            dfs(nx,ny);
            visited[nx][ny] =0;
        }
    }
}
void solve(){
    int i,j,k;
    cin >> n >> m >> len;
    for(i=1; i<=n; i++){
        string s; cin >> s;
        for(j=1; j<=m; j++){
            if(s[j-1] == 'T') grid[i][j] = 1;
        }
    }

    visited[n][1] = 1;
    dfs(n,1);
    cout << ans;
}
int main(){
    FASTIO
    solve();
}