#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ldb;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;
#pragma warning(disable:4996)

bool visited [1005];
vector<int>v[1005];
int n, m;

void dfs(int start){
    vector<int> s;
    s.push_back(start);
    while(!s.empty()){
        int node = s.back();
        s.pop_back();
        if(visited[node]) continue;
        visited[node] = true;
        cout << node << ' ';
        for(int i = 0; i<v[node].size(); i++){
            int next = v[node][i];
            if(!visited[next]){
                s.push_back(next);
            }
        }
    }
}

void reset(int nn){
    for(int i=1; i<=nn; i++){
        visited[i] = false;
    }
}
void bfs(int start){
    queue<int> q;
    q.push(start);
    visited[start] = true;
    while(!q.empty()){
        int node = q.front();
        q.pop();
        cout << node << ' ';
        for(int i=0; i<v[node].size(); i++){
            int next = v[node][i];
            if(!visited[next]){
                visited[next] = true;
                q.push(next);
            }
        }
    }
}
void solve(){
    int i, start, node, route, res;
    cin >> n >> m >> start;
    for(i=1; i<=m; i++){
        cin >> node >> route;
        v[node].push_back(route);
        v[route].push_back(node);
    }
    for(i=1; i<=n; i++){
        sort(v[i].begin(), v[i].end(), greater<int>());
    }
    dfs(start);
    cout << '\n';
    for(i=1; i<=n; i++){
        sort(v[i].begin(), v[i].end());
    }
    reset(n); 
    bfs(start);
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
}