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
#define MAXN 500005
ll MOD = 1000000007;
ll MOD2 = 998244353;
int INF = 0x3f3f3f3f;

ll arr[1000005];
string s;
stack<int> st;
void solve(){
    int i,j,k;
    int n; cin >> n;
    for(i=0; i<n; i++){
        cin >> s;
        bool lz = false;
        for(j=s.size()-1; j>=0; j--){
            if(!lz && s[j] == '0') continue;
            else{
                lz = true;

                st.push(s[j] - '0');
            }
        }
        ll num = 0;
        ll ten = 1;
        while(!st.empty()){
            num += st.top() * ten;
            ten *= 10;
            st.pop();
        }
        arr[i] = num;
    }
    sort(arr, arr +n);
    for(i=0; i<n; i++){
        cout << arr[i] << '\n';
    }
}

int main(){
    FASTIO
    solve();
}