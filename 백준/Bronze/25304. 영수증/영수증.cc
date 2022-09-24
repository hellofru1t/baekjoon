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


// n(n+1)/2 시그마

void solve(){
    int i,j,k;
    ll x,num = 0;
    cin >> x;
    ll n; cin >> n;
    for(i=0; i<n; i++){
        ll a,b; cin >> a >> b;
        num += a*b;
    }

    cout << (num == x ? "Yes" : "No"); 
}

int main(){
    FASTIO
    solve();
}