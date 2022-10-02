#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ldb;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;
#define FASTIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define TEST int tt; cin >> tt; while(tt--) solve();
#define MAX 100000

int tree[1<<10];
vector<int> ans;

void bfs(int n, int depth){
    ans.push_back(tree[n]);
    queue<pii> q;
    q.push({n,1});
    int d = n;
    int h = 1;
    while(!q.empty()){
        int next = q.front().first;
        int dp = q.front().second;
        q.pop();
        if(dp == depth) continue;
        if(h < dp){
            d = (d>>1);
            h++;
        }
        ans.push_back(tree[next - d/2]);
        ans.push_back(tree[next + d/2]);
        q.push({next - d/2 , dp+1});
        q.push({next + d/2 , dp+1});
    }
}
void solve(){
    int i,j,k;
    int n; cin >> n;
    for(i=1; i<(1<<n); i++){
        cin >> tree[i];
    }
    bfs((1<<n)/2 ,n);
    int idx = 0, cnt = 0;
    for(auto x : ans){
        cout << x << ' ';
        cnt++;
        if(cnt == (1<<idx)){
            idx++;
            cnt = 0;
            cout << '\n';
        }
    }
}
int main() {
    FASTIO
    solve();
}
