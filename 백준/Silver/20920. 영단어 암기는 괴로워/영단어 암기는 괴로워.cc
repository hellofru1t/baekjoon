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


typedef pair<string, int> psi;

map<string, int> mp;
vector<psi> v;

bool cmp(psi &a, psi &b){
    if(a.second > b.second){
        return true;
    }else if(a.second == b.second){
        if(a.first.size() > b.first.size()){
            return true;
        }else if(a.first.size() == b.first.size()){
            return a.first < b.first;
        }else return false;
    }else{
        return false;
    }
}
void solve(){
    int i,j,k;
    int n; cin >> n >> k;
    for(i=0; i<n; i++){
        string s; cin >> s;
        if(s.size() < k) continue;
        mp[s]++;
    }
    for(auto x : mp){
        v.push_back(psi(x.first,x.second));
    }
    sort(v.begin(),v.end(),cmp);

    for(auto x : v){
        cout << x.first << '\n';
    }
}


int main(){
    FASTIO
    solve();
}