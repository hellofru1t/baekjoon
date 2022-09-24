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


int arr[102][102];
bool visited[102][102];

int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};

void bfs(int n, int x, int y){
    visited[x][y] = true;
    queue<pii> q;
    q.push(pii(x,y));

    while(!q.empty()){
        int xx = q.front().first;
        int yy = q.front().second;
        q.pop();
        for(int i=0; i<4; i++){
            int nx = xx+dx[i];
            int ny = yy+dy[i];
            int num = arr[nx][ny];
            if(!visited[nx][ny] && num  && num < n ){
                visited[nx][ny] = true;
                q.push(pii(nx,ny));
            }
        }
    }
}

void reset(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++) {
            visited[i][j] = false;
        }
    }
}
void solve(){
    int i,j,k;
    int n; cin >> n;
    int mx = 0;
    int ans = 0;
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            cin >> arr[i][j];
            if(mx < arr[i][j]) mx = arr[i][j];
        }
    }
    while(mx != -1){
        int cnt = 0;
        reset(n);
        for(i=1; i<=n; i++){
            for(j=1; j<=n; j++){
                if(mx > arr[i][j] && !visited[i][j]){
                    bfs(mx,i,j);
                }
            }
        }
        for(i=1; i<=n; i++){
            for(j=1; j<=n; j++){
                if(!visited[i][j]){
                    bfs(101,i,j);
                    cnt++;
                }
            }
        }
        if(ans < cnt ) ans = cnt;
        mx--;
    }
    cout << ans;
}
int main(){
    FASTIO
    solve();
}