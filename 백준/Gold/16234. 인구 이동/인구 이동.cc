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

int n,l,r,sz;
int edge[55][55];
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
bool visited[55][55];
queue<pii> q;
vector<pii> temp;
vector<int> v;

bool ok(int x, int y, int adj){
    return !visited[x][y] && x && y && x <= n && y <= n && l <= adj && adj <= r;
}

void reset(){
    v.clear();
    temp.clear();
}

void bfs(int x,int y){
    visited[x][y] = true;
    v.push_back(edge[x][y]);
    q.push({x,y});
    temp.push_back({x,y});
    while(!q.empty()){
        int xx = q.front().first;
        int yy = q.front().second;
        q.pop();
        for(int i=0; i<4; i++){
            int nx = xx + dx[i];
            int ny = yy + dy[i];
            int num = abs(edge[xx][yy] - edge[nx][ny]);
            if(ok(nx,ny,num)){
                visited[nx][ny] = true;
                v.push_back(edge[nx][ny]);
                q.push({nx,ny});
                temp.push_back({nx,ny});

            }
        }
    }
}

void solve(){
    int i,j,k;
    cin >> n >> l >> r;
    for(i=1; i<=n; i++){
        for(j=1; j<=n; j++){
            cin >> edge[i][j];
        }
    }
    int cnt = 0;


    while(1){
        bool check = false;
        memset(visited, 0 ,sizeof(visited));
        for(i=1; i<=n; i++){
            for(j=1; j<=n; j++){
                if(visited[i][j]) continue;
                sz = 0;
                bfs(i,j);
                int sum = 0;
                for(auto x : v) sum += x;
                sum /= (int)v.size();
                for(auto idx : temp){
                    int x = idx.first;
                    int y = idx.second;
                    if(edge[x][y] != sum ){
                        edge[x][y] = sum;
                        check = true;
                    }
                }
                reset();
            }
        }
        if(check) cnt++;
        else break;
    }


    cout << cnt;
}

int main(){
    FASTIO
    solve();
}