#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ldb;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;
#define FASTIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define TEST int tt; cin >> tt; while(tt--) solve();





int edge[105][105];
bool visited[105][105];
int dy[]= {0,0,-1,1};
int dx[] = {1,-1,0,0};
int n,m,cnt,cnt2;

vector<pii>v;


void bfs(int x,int y){
    visited[x][y] = 1;
    if(edge[x][y]== 1){
        v.push_back({x,y});
        return;
    }
    for(int i=0; i<4; i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx<0 || nx>=n || ny<0 || ny>=m || visited[nx][ny])continue;
        bfs(nx,ny);
    }
}

void solve(){
    int i,j,k;
    cin >> n >> m;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            cin>>edge[i][j];
        }
    }
    while(1){
        cnt2 =0;
        memset(visited,0,sizeof(visited));
        v.clear();
        bfs(0,0);
        for(pii b : v){
            cnt2++;
            edge[b.first][b.second] = 0;
        }
        bool flag = false;
        for(i=0; i<n; i++){
            for( j=0; j<m; j++){
                if(edge[i][j] != 0) flag = true;
            }
        }
        cnt++;
        if(!flag) break;
    }
    cout<< cnt << '\n' << cnt2 << '\n';
}
int main(){
    FASTIO
    solve();
}
