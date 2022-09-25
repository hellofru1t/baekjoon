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
#define MAXN 200005
ll MOD = 1000000007;
ll MOD2 = 998244353;
int INF = 0x3f3f3f3f;

stack<int> st;
string s;
void solve(){
    int i,j,k;
    int ans = 0,n,x;

    cin >> n;
    for(i=0; i<n; i++){
        cin >> s;

        for(j=0; j<s.size(); j++){
            s[j] == 'A' ? x = 0 : x = 1;

            if(st.empty()) st.push(x);
            else{
                if(st.top() == x){
                    st.pop();
                }else st.push(x);
            }
        }
        if(st.empty()){
            ans++;
        }else{
            while(!st.empty()){
                st.pop();
            }
        }

    }
    cout << ans;
}

int main(){
    FASTIO
    solve();
}