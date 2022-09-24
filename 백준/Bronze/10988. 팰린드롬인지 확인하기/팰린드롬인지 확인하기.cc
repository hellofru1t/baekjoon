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


string s;
void solve(){
    int i,j,k;
    cin >> s;
    for(i=0,j=s.size()-1; i<j; i++, j--){
        if(s[i] != s[j]){
            cout << 0;
            return;
        }
    }
    cout<< 1;
}

int main() {
    FASTIO
    solve();
}