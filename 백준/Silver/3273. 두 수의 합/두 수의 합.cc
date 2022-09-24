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

void solve(){
    int i,j,k;
    int n,x;cin >> n;
    set<int> st;
    for(i=0; i<n; i++) cin >> x, st.insert(x);
    cin >> x;
    int cnt = 0;
    for(auto num : st){
        if(st.find(x - num) != st.end()) cnt++;
    }
    cout << cnt / 2; 
}

int main() {
    FASTIO
    solve();
}