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

int arr[15005];
set<int> st;
void solve(){
    int i,j,k;
    int n,m; cin >> n >> m;
    for(i=0; i<n; i++){
        cin >> arr[i];
        st.insert(arr[i]);
    }
    sort(arr,arr+n);
    int cnt = 0;
    for(i=0; i<n; i++){
        if(st.find(m-arr[i]) != st.end()) cnt++;
    }
    cout <<  cnt/2;


}

int main() {
    FASTIO
    solve();
}