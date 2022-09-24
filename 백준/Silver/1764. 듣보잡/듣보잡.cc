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

void solve(){
    int i,j,k;
    int n,m;
    set<string> ans;
    unordered_set<string> unset;
    string s;
    cin >> n >> m;
    for(i=0; i<n; i++){
        cin >> s;
        unset.insert(s);
    }
    for(i=0; i<m; i++){
        cin >> s;
        if(unset.find(s) != unset.end()) ans.insert(s);
    }
    cout << ans.size() << '\n';
    for( auto x : ans){
        cout << x << '\n';
    }
}


int main(){
    FASTIO
    solve();
}