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

deque<char> dq;
string temp;
int cmp[50];
void solve(){
    int i,j,k;
    string s; cin >> s;
    for(i=0; i<s.size(); i++){
        cmp[s[i] - 'A']++;
    }
    bool odd = false;
    int idx = -1;
    for(i=0; i<26; i++){
        if(cmp[i]&1 && odd){
            cout << "I'm Sorry Hansoo";
            return;
        }
        if(cmp[i]&1) odd = true,idx = i;
    }
    if(odd) dq.push_back('A'+idx);
    for(i=25; i>=0; i--){
        if(cmp[i]&1) cmp[i]--;
        while(cmp[i]){
            dq.push_back('A'+i);
            dq.push_front('A'+i);
            cmp[i] -= 2;
        }
    }
    for(auto x : dq){
        cout << x;
    }

}

int main() {
    FASTIO
    solve();
}