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

int cnt[100001];
int cntmx[100001];
bool visited[100001];

void bfs(int a, int b){
    queue<int> q;
    q.push(a);
    visited[a]= true;
    cntmx[a] = 1;
    while(!q.empty()){
        int num = q.front();
        int arr[3];
        q.pop();
        arr[0] = num * 2;
        arr[1] = num + 1;
        arr[2] = num - 1;
        for(int i=0; i<3; i++){
            if( arr[i] >= 0 && arr[i]<= 100000 && !visited[arr[i]]){
                visited[arr[i]] = true;
                q.push(arr[i]);
                cnt[arr[i]] = cnt[num] + 1;
                cntmx[arr[i]] = cntmx[num];
            }else if(arr[i] >= 0 && arr[i]<= 100000){
                if(cnt[arr[i]] == cnt[num] + 1) cntmx[arr[i]] += cntmx[num];
            }
        }
    }
}

void solve(){
    int i,j,k;
    int a,b;
    cin >> a >> b;
    bfs(a,b);
    cout << cnt[b] << '\n' << cntmx[b];
}

int main(){
    FASTIO
    solve();
}