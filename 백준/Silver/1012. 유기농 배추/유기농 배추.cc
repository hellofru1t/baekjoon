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

bool visited[51][51];
bool graph[51][51];
int dy [] = {0,1,0,-1};
int dx [] = {-1,0,1,0};
void reset(int n, int m){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            graph[i][j] = 0;
            visited[i][j] = 0;
        }
    }
}

void bfs(int n, int m){
    visited[n][m] = true;
    queue<pii> q;
    q.push(pii(n,m));
    while(!q.empty()){
        int xx = q.front().first;
        int yy = q.front().second;
        q.pop();
        for(int i=0; i<4; i++){
            int nx = xx + dx[i];
            int ny = yy + dy[i];
            if(!visited[nx][ny] && graph[nx][ny] ){
                visited[nx][ny] = true;
                q.push(pair<int,int>(nx,ny));
            }
        }
    }
}
void solve(){
    int i,j,k;
    int a,b,n,m;
    cin >> n >> m >> k;
    reset(n,m);
    for(i=0; i<k; i++){
        cin >> a >> b;
        graph[a][b] = true;
    }
    int cnt = 0;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            if(!visited[i][j] && graph[i][j]){
                cnt++;
                bfs(i,j);
            }
        }
    }
    cout << cnt << '\n';
}
int main(){
    FASTIO
    TEST
}