#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ldb;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;
#define FASTIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define TEST int tt; cin >> tt; while(tt--) solve();

int n, r, tmp, root;
vector<int> edge[55];
int dfs(int node){
    int res = 0, leaf = 0;
    for(auto x : edge[node]){
        if(x == r) continue;
        res += dfs(x);
        leaf++;
    }
    if(leaf == 0) return 1;
    return res;
}

void solve(){
    int i,j,k;
    cin >> n;
    for(i=0; i < n; i++){
        cin >> tmp;
        tmp == -1 ? root = i : 1;
        if(tmp != -1) edge[tmp].push_back(i);
    }
    cin >> r;

    r == root ? cout << 0  : cout << dfs(root);
}

int main() {
    FASTIO
    solve();
}