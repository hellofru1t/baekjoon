#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ldb;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;
#define FASTIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define TEST int tt; cin >> tt; while(tt--) solve();



int n, c, a[1005];
vector<pii> v;
map<int, int> mp, it;
bool cmp(pii a, pii b){
    if(a.first == b.first) return it[a.second] < it[b.second];
    return a.first > b.first;
}

void solve(){
    int i,j,k;
    cin >> n >> c;
    for(i=0; i<n; i++){
        cin >> a[i];mp[a[i]]++;
        if(it[a[i]] == 0) it[a[i]] = i+1;
    }
    for(auto it : mp){
        v.push_back({it.second, it.first});
    }
    sort(v.begin(), v.end(), cmp);
    for(auto x : v){
        for(int y = 0; y < x.first; y++){
            cout << x.second << " ";
        }
    }
}

int main() {
    FASTIO
    solve();
}