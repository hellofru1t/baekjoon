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


int arr[102];
void solve(){
    int i,j,k;
    int y,m,n,x;
    cin >> n;
    y = m = 0;
    for(i=0; i<n; i++){
        cin >> x;
        y += (x/30 * 10) + 10;
        m += (x/60 * 15) + 15;
    }
    if(y == m){
        cout << "Y M " << y;
    }else if(y < m){
        cout << "Y " << y;
    }else{
        cout << "M " << m;
    }
}

int main(){
    FASTIO
    solve();
}