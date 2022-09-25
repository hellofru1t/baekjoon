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

queue<pii> fire;
queue<pii> q;
vector<int> ans;
bool visited[1005][1005];
int graph[1005][1005];
int cnt[1005][1005];
int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};

int n,m;

void bfs(int x, int y){
    visited[x][y] = true;
    cnt[x][y] = 1;
    q.push({x,y});
    int xx,yy;
    while(!q.empty()){
        int len = fire.size();
        while(len--){
            xx = fire.front().fi;
            yy = fire.front().se;
            fire.pop();
            for(int i=0; i<4; i++){
                int nx = xx + dx[i];
                int ny = yy + dy[i];
                if(nx && ny && nx <= n && ny <= m && !graph[nx][ny]){
                    graph[nx][ny] = 1;
                    fire.push({nx,ny});
                }
            }
        }

        int len2 = q.size();
        while(len2--){
            xx = q.front().fi;
            yy = q.front().se;
            q.pop();
            for(int i=0; i<4; i++){
                int nx = xx + dx[i];
                int ny = yy + dy[i];
                if(nx && ny && nx <= n && ny <= m && !visited[nx][ny] && !graph[nx][ny]){
                    visited[nx][ny] = true;
                    cnt[nx][ny] = cnt[xx][yy] + 1;
                    q.push({nx,ny});
                }
            }
        }
    }


}


void solve() {
    int i,j,k;
    cin >> m >> n;
    ans.clear();
    memset(visited,0,sizeof(visited));
    memset(cnt,0,sizeof(cnt));
    memset(graph,0,sizeof(graph));
    while(!q.empty()) q.pop();
    while(!fire.empty()) fire.pop();


    int it1,it2;
    for(i=1; i<=n; i++){
        string s; cin >> s;
        for(j=1; j<=m; j++){
            if(s[j-1] == '*'){
                fire.push({i,j});
                graph[i][j] = 1;
            }else if(s[j-1] == '@'){
                it1 = i;
                it2 = j;
            }else if(s[j-1] == '#'){
                graph[i][j] = 1;
            }
        }
    } // input
 
    bfs(it1,it2);
    for(i=1; i<=n; i++){
        if(cnt[i][1]) ans.push_back(cnt[i][1]);
        if(cnt[i][m]) ans.push_back(cnt[i][m]);
    }

    for(i=1; i<=m; i++){
        if(cnt[1][i]) ans.push_back(cnt[1][i]);
        if(cnt[n][i]) ans.push_back(cnt[n][i]);
    }
    if(ans.empty()){
        cout <<  "IMPOSSIBLE\n";
    }else{
        sort(ans.begin(),ans.end());
        cout << ans[0] << '\n';
    }
}

int main(){
    FASTIO
    TEST
}