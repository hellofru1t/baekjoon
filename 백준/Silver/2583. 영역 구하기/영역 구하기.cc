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

int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};
int graph[105][105];
bool visited[105][105];
int n,m,cnt;

bool ok(int nn, int mm){
    if(nn >= 0 && mm >= 0 && nn<n && mm < m && !visited[nn][mm] && !graph[nn][mm]){
        return true;
    }
    return false;
}
void bfs(int nn, int mm){
    queue<pii> q;
    cnt++;
    q.push({nn,mm});
    visited[nn][mm] = true;
    while(!q.empty()){
        int xx = q.front().fi;
        int yy = q.front().se;
        q.pop();
        for(int i=0; i<4; i++){
            int nx = xx + dx[i];
            int ny = yy + dy[i];
            if(ok(nx,ny)){
                cnt++;
                visited[nx][ny] = true;
                q.push({nx,ny});
            }
        }
    }
}
void solve() {
    int i,j,k;
    cin >> n >> m >> k;
    swap(n,m);
    int x1,y1,x2,y2;
    vector<int> ans;
    while(k--){
        cin >> x1 >> y1 >> x2 >> y2;
        for(i=x1; i<x2; i++){
            for(j=y1; j<y2; j++){
                graph[i][j] = 1;
            }
        }
    }
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            if(visited[i][j] || graph[i][j]) continue;

            bfs(i,j);
            ans.push_back(cnt);
            cnt = 0;

        }
    }
    cout << ans.size() << '\n';
    sort(ans.begin(), ans.end());
    for(auto x : ans){
        cout << x << ' ';
    }
}

int main(){
    FASTIO
    solve();
}