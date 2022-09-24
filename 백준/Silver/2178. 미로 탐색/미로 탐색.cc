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



bool visited[101][101];
int graph[101][101], cnt[101][101];
int dx[] = {0,0,-1,1};
int dy[] = {-1,1,0,0};
int n,m;

void bfs(){
    visited[1][1] = true;
    queue<pii>q;
    q.push(pii(1,1));
    cnt[1][1]++;
    while(!q.empty()){
        pii p = q.front();
        q.pop();
        for(int i=0; i<4; i++){
            int x = p.first +dy[i];
            int y = p.second + dx[i];
            if((x >= 1 &&  x<= n ) && ( y >= 1 && y <= m) && !visited[x][y] && graph[x][y] == 1 ){
                visited[x][y] = true;
                cnt[x][y] = cnt[p.first][p.second] + 1;
                q.push(pair<int,int>(x,y));
            }
        }
    }
}

void solve(){
    int i,j,k;
    cin >> n >> m;
    for(i=1; i<=n; i++){
        string s; cin >> s;
        for(j=1; j<=m; j++){
            if(s[j-1] == '1') graph[i][j]++;
        }
    }
    bfs();
    cout << cnt[n][m];
}
int main(){
    FASTIO
    solve();
}