#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ldb;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;
#define FASTIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define TEST int tt; cin >> tt; while(tt--) solve();
#define MAX 200005;


multiset<int> mp;
void solve(){
    mp.clear();
    int i,j,k;
    int n; cin >> n;
    int num;
    while(n--){
        char cmd; cin >> cmd;
        if(cmd == 'I'){
            cin >> num;
            mp.insert(num);
        }else{
            cin >> num;
            if(mp.empty()) continue;
            else{
                num == 1 ? mp.erase(prev(mp.end())) : mp.erase(mp.begin());
            }
        }
    }
    mp.empty() ? cout << "EMPTY\n" : cout << *(--mp.end()) << ' ' << *mp.begin() << '\n';
 }
int main() {
    FASTIO
    TEST
}