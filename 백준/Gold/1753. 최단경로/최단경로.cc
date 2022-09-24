#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ldb;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;
#pragma warning(disable:4996)

int INF = 1000000000;
vector<pii> a[20005];
priority_queue<pii> pq;
int d[20005];


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int i,j,k;
    int v,e;
    cin >> v >> e >>k;
    for(i=1; i<=v; i++){
        d[i] = INF;
    }

    int u,w,vv;
    for(i=0; i<e; i++){
        cin >> u >> vv >> w;
        a[u].push_back(make_pair(vv,w));
    }

    d[k] = 0;
    pq.push(make_pair(0,k));
    while(!pq.empty()){
        int x = -pq.top().first;
        int U = pq.top().second;
        pq.pop();

        for(i=0;i<a[U].size();i++){
            int next = a[U][i].first;
            int W = a[U][i].second;
            if(x+W<d[next]){
                d[next] = x+W;
                pq.push(make_pair(-(x+W),next));
            }
        }
    }

    for(i=1; i<=v; i++){
        if(d[i] == INF) cout << "INF\n";
        else cout << d[i] << '\n';
    }
}