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
    getline(cin, s);
    for(i=0; i<s.size(); i++){
        if(s[i] >= 'a' && s[i] <= 'z') s[i] = 'a' + (((s[i]-'a')+13)%26);
        if(s[i] >= 'A' && s[i] <= 'Z') s[i] = 'A' + (((s[i]-'A')+13)%26);

    }
    cout << s;
}

int main() {
    FASTIO
    solve();
}