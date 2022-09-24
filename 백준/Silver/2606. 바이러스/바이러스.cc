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


int graph[101][101];
bool visited[101];
int computer_num, ans;

void dfs(int n){
    ans++;
    visited[n] = true;
    for (int i=1; i<=computer_num; i++){
        if (graph[n][i] && !visited[i])
            dfs(i);
    }
}

void solve(){
    int i,j,k; 
    int n,x,y;
    cin >> computer_num >> n; 
    for (i=0; i<n; i++){
        cin >> x >> y;
        graph[x][y] = graph[y][x] = 1;
    }
    dfs(1);
    cout << ans - 1; 
}

int main(){
    FASTIO
    solve();
}