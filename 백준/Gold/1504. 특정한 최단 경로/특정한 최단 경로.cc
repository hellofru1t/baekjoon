#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ldb;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;
#define FASTIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define TEST int tt; cin >> tt; while(tt--) solve();

int MOD = 1000000007;
ll MOD2 = 998244353;
int INF = 0x3f3f3f3f;

vector<pii> edge[805];
priority_queue<pii, vector<pii>, greater<pii>> pq;

int n,e;
int dist[805];
void dijkstra(int start){
    for(int i=1; i<=n; i++){
        dist[i] = INF;
    }
    dist[start] = 0; 
    pq.push({0,start});
    while(!pq.empty()){
        int pp = pq.top().first;
        int now = pq.top().second;
        pq.pop();
        if(dist[now] < pp) continue;
        for(int i=0; i<edge[now].size(); i++){
            int nextpp = edge[now][i].first + pp;
            int nextNode = edge[now][i].second;
            if(dist[nextNode] > nextpp){
                dist[nextNode] = nextpp;
                pq.push({nextpp, nextNode});
            }
        }
    }
}
void solve(){
    int i,j,k;
    int s,d,u,v,w,e1,e2;
    cin >> n >> e;
    for(i=0; i<e; i++){
        cin >> u >> v >> w;
        edge[u].push_back({w,v});
        edge[v].push_back({w,u});
    }
    cin >> e1 >> e2;

    ll ans;


    dijkstra(1);
    ll startToEdge1 , startToEdge2;
    startToEdge1 = dist[e1];
    startToEdge2 = dist[e2];

    dijkstra(e1);

    ll Edge1ToEdge2, Edge1ToEnd;
    Edge1ToEdge2 = dist[e2];
    Edge1ToEnd = dist[n];

    dijkstra(e2);

    ll Edge2ToEdge1, Edge2ToEnd;
    Edge2ToEdge1 = dist[e1];
    Edge2ToEnd = dist[n];


    ll path1 = startToEdge1 + Edge1ToEdge2 + Edge2ToEnd;
    ll path2 = startToEdge2 + Edge2ToEdge1 + Edge1ToEnd;

    ans = min(path1, path2);
    if(ans >= INF || Edge2ToEdge1 == INF) ans = -1;
    cout << ans;
}

int main(){
    FASTIO
    solve();
}