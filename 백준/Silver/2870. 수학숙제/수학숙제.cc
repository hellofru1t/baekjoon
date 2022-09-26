#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ldb;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;
#define FASTIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define TEST int tt; cin >> tt; while(tt--) solve();


vector<string> v;
string s, tmp;
void go(){
    while(1){
        if(!tmp.empty() && tmp.front() == '0')tmp.erase(tmp.begin());
        else break;
    }
    if(tmp.empty()) tmp = "0";
    v.push_back(tmp);
    tmp = "";
}
bool cmp(string a, string b){
    if(a.size() == b.size()) return a < b;
    return a.size() < b.size();
}
void solve(){
    int i,j,k;
    int n; cin >> n;
    for(i=0; i<n; i++){
        cin >> s;
        tmp = "";
        for(j=0; j<s.size(); j++){
            if(s[j] >= '0' && s[j] <= '9') tmp += s[j];
            else if(!tmp.empty()) go();
        }
        if(!tmp.empty()) go();
    }
    sort(v.begin(), v.end(), cmp);
    for(string x : v)cout << x << "\n";
}

int main() {
    FASTIO
    solve();
}