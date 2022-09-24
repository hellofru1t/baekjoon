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



void solve(){
    int i,j,k;
    int a,b,c;
    cin >> a >> b >> c;
    int num;
    if(a == b && b == c ){
        num = a * 1000 + 10000;
    }else if(a != b && b != c && c != a){
        num = max(a,max(b,c)) * 100;
    }else{
        if(a == b){
            num = a * 100;
        }else if(b == c){
            num = b * 100 ;
        }else num = c * 100;
        num += 1000;
    }
    cout << num;
}

int main(){
    FASTIO
    solve();
}