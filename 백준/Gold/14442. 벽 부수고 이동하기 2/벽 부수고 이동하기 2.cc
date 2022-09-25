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
#define ARRN  int n; cin >> n; for(i=0; i<n; i++) cin >> arr[i];
#define MAXN 200005
#define fi first
#define se second

ll MOD = 1000000007;
ll MOD2 = 998244353;
int INF = 0x3f3f3f3f;

int n,m,k;

int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};
int graph[1005][1005];
bool visited[1005][1005][15];
int cnt[1005][1005];
vector<int> ans;
bool ok(int x, int y,int z){
    if(x && y && x<=n && y <= m  && z<=k  && !visited[x][y][z] && !graph[x][y]){
        return true;
    } return false;
}

void bfs(int x, int y){
    visited[x][y][0] = true;
    cnt[x][y] = 1;
    queue<tiii> q;
    q.push({x,y,0});
    while(!q.empty()){
        int xx = get<0>(q.front());
        int yy = get<1>(q.front());
        int breakcnt = get<2>(q.front());
        q.pop();
        for(int i=0; i<4; i++){
            int nx = xx + dx[i];
            int ny = yy + dy[i];
            if(graph[nx][ny] && breakcnt<k && nx && ny && nx <= n && ny <= m && !visited[nx][ny][breakcnt+1]){
                visited[nx][ny][breakcnt+1] = true;
                cnt[nx][ny] = cnt[xx][yy]+ 1;
                q.push({nx,ny,breakcnt+1});
                continue;
            }

            if(ok(nx,ny,breakcnt)){
                visited[nx][ny][breakcnt] = true;
                cnt[nx][ny] = cnt[xx][yy]+1;
                if(nx == n && ny == m) ans.push_back(cnt[nx][ny]);
                q.push({nx,ny,breakcnt});
            }
        }
    }
}
void solve() {
    int i,j;
    cin >> n >> m >> k;
    for(i=1; i<=n; i++){
        string s; cin >> s;
        for(j=1; j<=m; j++){
            if(s[j-1] == '1'){
                graph[i][j] = 1;
            }
        }
    }
    if(n == 1 && m == 1){
        cout << "1";
        return;
    }
    bfs(1,1);
    bool ok = false;

    for(i=0; i<=k; i++){
        if(visited[n][m][i]) ok = true;
    }
    sort(ans.begin(),ans.end());
    ok ? cout << ans[0] : cout << "-1";
}

int main(){
    FASTIO
    solve();
}