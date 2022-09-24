#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ldb;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;
#define fi first
#define se second
#define FASTIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define TEST int tt; cin >> tt; while(tt--) solve();

int cmp[30];
int t[3][105];

void solve(){
    int i,j,k;
    int a,b,c; cin >> a >> b >> c;
    int ans = 0;
    for(i=0; i<3; i++){
        int s,e; cin >> s >> e;
        for(j=s; j<e; j++){
            t[i][j] = 1;
        }
    }

    for(i=1; i<=100; i++){
        int plag = t[0][i] + t[1][i] + t[2][i];
        if(plag == 1) ans += a;
        if(plag == 2) ans += b*2;
        if(plag == 3) ans += c*3;
    }

    cout << ans;
}

int main() {
    FASTIO
    solve();
}