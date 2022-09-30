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
#define MAXN 200005
ll MOD = 1000000007;
ll MOD2 = 998244353;
int INF = 0x3f3f3f3f;

priority_queue<pii,vector<pii>,greater<pii>> pq;
void solve(){
    int i,j,k;
    int n,l,x; cin >> n >> l;
    for(i=0; i<n; i++){
        cin >> x;
        pq.push({x,i});
        if(i-l+1 >= 0){
            int val = pq.top().first;
            int idx = pq.top().second;
            if(idx >= i-l+1){
                cout << val  << ' ';
            }else{
                while(1){
                    int idx = pq.top().second;
                    if(idx >= i-l+1) break;
                    pq.pop();
                }

                cout << pq.top().first << ' ';
            }
        }else{
            cout << pq.top().first << ' ';
        }
    }
}

int main(){
    FASTIO
    solve();
}