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
string cmp1,cmp2;
void solve(){
    int i,j,k;
    int n; cin >> n >> s;
    int toggle = 0;
    for(i=0; i<s.size(); i++){
        if(s[i] == '*'){
            toggle ^= 1;
            continue;
        }
        !toggle ? cmp1 += s[i] : cmp2 += s[i];
    }

    while(n--){
        cin >> s;
        if(cmp1.size()+  cmp2.size() > s.size()){
            cout << "NE\n";
        }else{
            if(cmp1 == s.substr(0,cmp1.size()) && cmp2 == s.substr(s.size()-cmp2.size())){
                cout << "DA\n";
            }else cout << "NE\n";
        }
    }
}

int main() {
    FASTIO
    solve();
}