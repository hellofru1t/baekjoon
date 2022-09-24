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
    int n;
    int count = 0;
    int title = 665;
    string s; cin >> n;
    while(++title){
        s = to_string(title);
        if (s.find("666") != -1) ++count;
        if (count == n){
            cout << title << endl;
            break;
        }
    }
}
int main(){
    FASTIO
    solve(); 
}