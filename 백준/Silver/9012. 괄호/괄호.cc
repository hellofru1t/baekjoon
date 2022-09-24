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
    stack<int> s;
    string a; cin >> a;
    for(i=0; i<a.size();i++){
        if(a[i] == '('){
            s.push(1);
        }else{
            if(s.empty()){
                s.push(1); break;
            }else s.pop();
        }
    }
    cout << (s.empty() ? "YES\n" : "NO\n");
    while(!s.empty()) s.pop();
}
int main(){
    FASTIO
    TEST
}