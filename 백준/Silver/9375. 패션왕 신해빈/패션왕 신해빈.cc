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

string str1, str2;
void solve(){
    int i,j,k;
    map<string, ll> mp;
    int n; cin >> n;
    for(i=0; i<n; i++){
        cin >> str1 >> str2;
        mp[str2]++;
    }
    int sum = 1;
    for(auto x : mp){
        sum *= (x.second+1LL);
    }
    cout << --sum << '\n';

}

int main() {
    FASTIO
    TEST
}