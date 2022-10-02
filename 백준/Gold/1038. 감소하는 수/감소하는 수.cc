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

string s;
vector<ll> v;

int arr[10];
int visited[10];
void dfs(int now, int depth){
    if(now == depth){
        ll num = 0;
        ll ten = 1;
        for(int i=0; i<now-1; i++){
            if(arr[i] > arr[i+1]) return;
        }
        for(int i=0; i<now; i++){
            num += arr[i] * ten;
            ten *= 10LL;
        }
        v.push_back(num);
        return;
    }

    for(int i=now; i<10; i++){
        if(!visited[i]){
            visited[i] = true;
            arr[now] = i;
            dfs(now+1,depth);
            visited[i] = false;
        }
    }
}
void solve(){
    int i,j,k;
    int n; cin >> n;
    for(i=0; i<10; i++){
        v.push_back(i);
    }

    for(i=2; i<=10; i++){
        dfs(0,i);
    }


    sort(v.begin(), v.end());

    if(n < v.size()){
        cout << v[n];
    }else{
        cout << "-1";
    }
}

int main(){
    FASTIO
    solve();
}