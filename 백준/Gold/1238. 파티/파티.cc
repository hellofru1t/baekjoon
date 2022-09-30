#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ldb;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;
#define FASTIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

vector<pii> edge[1005];

int d[1005];
int INF = 0x3f3f3f3f;
int arr[1005];
int n,m;

void dijkstra(int start){
    for(int i=1; i<=n; i++){
        d[i] = INF;
    }
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    d[start] = 0;
    pq.push({0,start});

    while(!pq.empty()){
        int distance = pq.top().first;
        int node = pq.top().second;
        pq.pop();
        if(d[node] < distance )  continue;
        for(int i=0; i< edge[node].size(); i++){
            int next = edge[node][i].second;
            int nextdistance = distance  + edge[node][i].first;
            if(d[next] > nextdistance){
                d[next] = nextdistance;
                pq.push({nextdistance, next});
            }
        }
    }

}
void solve(){
    int i,j,k;
    int x;
     cin >> n >> m >> x;
    int nd, e, w;
    for(i=0;i<m;i++){
        cin >> nd >> e >> w;
        edge[nd].push_back({w,e});
    }
    int ans;
    ans = 0;
    for(i=1; i<=n; i++){
        dijkstra(i);
        arr[i] = d[x];
    }
    dijkstra(x);
    for(i=1; i<=n; i++){
        arr[i] += d[i];
        ans = max(ans, arr[i]);
    }
    cout << ans;
}
int main(){
    FASTIO
    solve();
}