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


ll MOD = 1000000007;
ll MOD2 = 998244353;
int INF = 0x3f3f3f3f;

set<int> a;
void solve(){
    int i,j,k;
    int x,n; cin >> n;
    for(i=0; i<n; i++){
        cin >> x; a.insert(x);
    }
    cin >> n;
    while(n--){
        cin >> x;
        if(a.find(x) != a.end()){
            cout << "1\n";
        }else cout << "0\n";
    }
    a.clear(); 
}

int main(){
    FASTIO
    TEST
}