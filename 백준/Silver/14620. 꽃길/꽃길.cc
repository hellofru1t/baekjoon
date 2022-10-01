#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ldb;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;
#define FASTIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define TEST int tt; cin >> tt; while(tt--) solve();

int INF = 0x3f3f3f3f;
int n,ans = INF;
int grid[15][15];
bool visited[15][15];
int dx[] = {0,0,-1,1};
int dy[] = {1,-1,0,0};

bool ok(int x, int y){
    if(x && y && x<= n && y <= n && !visited[x][y]){
        for(int i=0; i<4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx && ny && nx <= n && ny <= n && !visited[nx][ny]) continue;
            return false;
        }
        return true;
    }
    return false;
}

void toggle(int x, int y){
    visited[x][y] = false;
    for(int i=0; i<4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        visited[nx][ny] = false;
    }
}

void dfs(int depth, int sum){
    if(depth == 3){
        ans = min(ans,sum);
        return;
    }

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(ok(i,j)){
                int tmep = grid[i][j];
                visited[i][j] = true;
                for(int k=0; k<4; k++){
                    int x = i+dx[k];
                    int y = j+dy[k];
                    visited[x][y] = true;
                    tmep += grid[x][y];
                }
                dfs(depth+1, sum + tmep);
                toggle(i,j);
            }
        }
    }
}
void solve(){
    int i,j,k;

    cin >> n;
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            cin >> grid[i][j];
        }
    }
    dfs(0,0);
    cout << ans;
}
int main(){
    FASTIO
    solve();
}



