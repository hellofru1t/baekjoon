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

map<string, int> mp;
string str[100005]; 
void solve(){
    int i,j,k;
    int n; cin >> n >> k;
    string s;
    for(i=1; i<=n; i++){
        cin >> s;
        mp.insert({s,i});
        str[i] = s; 
    }
    while(k--){
        cin >> s;
        if(s[0] >= '0' && s[0] <= '9'){
            int num = stoi(s);
            cout << str[num] << '\n';
        }else{
            if(mp.find(s) != mp.end()){
                cout << mp.find(s)->second << '\n'; 
            }
        }
    }
}

int main() {
    FASTIO
    solve();
}