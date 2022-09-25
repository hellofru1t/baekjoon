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

int cmp[30];
void solve(){
    int i,j,k;
    int n;  cin >> n;
    for(i=0; i<n; i++){
        string s; cin >> s;
        cmp[s.front()-'a']++;
    }
    bool ok = false;
    for(i=0; i<26; i++){
        if(cmp[i] >= 5){
            char a = 'a'+i;
            cout << a;
            ok = true;
        }
    }
    if(!ok) cout << "PREDAJA";
}


int main(){
    FASTIO
    solve();
}