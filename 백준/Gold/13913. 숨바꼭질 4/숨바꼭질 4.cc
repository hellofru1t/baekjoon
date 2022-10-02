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


int cnt[100005];
int pre[100005];
int n,m;

queue<int> q;
void bfs(int s){
    cnt[s] = 1;
    q.push(s);
    while(!q.empty()){
        int now = q.front();
        q.pop();
        for(auto next : {now+1 , now-1 , now*2}){
            if(next >=0 && next <= MAX && !cnt[next]){
                q.push(next);
                cnt[next] = cnt[now] + 1;
                pre[next] = now;
            }
        }
    }
}
void solve(){
    int i,j,k;
    cin >> n >> m;
    if(n == m){
        cout << 0 << '\n' << n;
        return;
    }
    bfs(n);
    cout << cnt[m]-1 << '\n';
    vector<int> v;
    v.push_back(m);
    for(i=pre[m]; ; i = pre[i]){
        v.push_back(i);
        if(i == n) break;
    }
    reverse(v.begin(), v.end());
    for(auto x : v){
        cout << x << ' ';
    }
}
int main() {
    FASTIO
    solve();
}