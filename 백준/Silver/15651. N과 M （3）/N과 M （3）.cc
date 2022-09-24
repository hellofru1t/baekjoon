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


int n,m;
int arr[10];

void dfs(int cnt){
    if(cnt == m){
        for(int i = 0 ; i<m; i++){
            cout << arr[i] << ' ';
        } cout << '\n';
        return;
    }
    for(int i = 1; i<= n; i++){
        arr[cnt] = i;
        dfs(cnt+1);
    }
}
void solve(){
    int i,j,k;
    cin >> n >> m;
    dfs(0  );
}


int main(){
    FASTIO
    solve();
}