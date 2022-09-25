#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ldb;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;

#define FASTIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define TEST  int tt; cin >> tt; while(tt--) solve();
#define fi first
#define se second
#define pb push_back

const int INF = 0x3f3f3f3f;

int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};
int graph[101][101];
bool visited[101][101];
bool red;
int n,m;

int cnt[51][51];
void reset(int nn, int mm){
    for(int i=0; i<nn; i++){
        for(int j=0; j<mm; j++){
            visited[i][j] = false;
            cnt[i][j] = 0;
        }
    }
}

int mx(int nn, int mm){
    int x = 0;
    for(int i=0; i<nn; i++){
        for(int j=0; j<mm; j++){
            if(x < cnt[i][j]) x = cnt[i][j];
        }
    }
    return x;
}

void bfs(int x,int y){
    queue<pii> q;
    visited[x][y] = true;
    q.push({x,y});
    while(!q.empty()){
        int xx = q.front().fi;
        int yy = q.front().se;
        q.pop();
        for(int i=0; i<4; i++){
            int nx = xx + dx[i];
            int ny = yy + dy[i];
            if(nx >= 0 && ny >= 0 && nx < n && ny < m && !visited[nx][ny] && graph[nx][ny] == 1 ){
                q.push({nx,ny});
                visited[nx][ny] = true;
                cnt[nx][ny] = cnt[xx][yy] + 1;
            }
        }
    }
}
void solve(){
    int i,j,k;
    cin >> n >> m;
    string s;

    for(i=0; i<n; i++){
        cin >> s;
        for(j=0; j<m; j++){
            if(s[j] == 'L') graph[i][j] = 1;
            else graph[i][j] = 0;
        }
    }

    int ans = 0;
    int num;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            if(!visited[i][j] && graph[i][j]){
                bfs(i,j);
                num = mx(n,m);
                reset(n,m);
                if(ans < num ) ans = num;
            }
        }
    }
    cout << ans;
}
int main(){
    FASTIO
    solve();
}