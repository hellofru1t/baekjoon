#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ldb;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;
#define fi first
#define se second
#define FASTIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define TEST int tt; cin >> tt; while(tt--) solve();

vector<int> edge[10005];
bool visited[10005];
vector<int> ans;
int cnt;
int arr[100005];
void bfs(int node){
    visited[node] = true;
    queue<int> q;
    q.push(node);
    cnt++;
    while(!q.empty()){
        int now = q.front();
        q.pop();
        for(int i=0; i<edge[now].size(); i++){
            int next = edge[now][i];
            if(!visited[next]){
                cnt++;
                visited[next] = true;
                q.push(next);
            }
        }
    }
}
void solve(){
    int i,j,k;
    int n,m; cin >> n >> m;
    int u,v;
    for(i=0; i<m; i++){
        cin >> u >> v;
        edge[v].push_back(u);
    }
    int mx = 0;
    for(i=1; i<=n; i++){
        memset(visited,0,sizeof(visited));
        cnt = 0;
        bfs(i);
        arr[i] = cnt;
        mx = max(mx,cnt);
    }
    
    for(i=1; i<=n; i++){
        if(mx == arr[i] ) cout << i << ' ';
    }
}

int main() {
    FASTIO
    solve();
}