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

ll MOD = 1000000007;
ll MOD2 = 998244353;
int INF = 0x3f3f3f3f;

int a[20005];
int b[20005];
void solve(){
    int i,j,k;
    int n,m; cin >> n >> m;
    for(i=0; i<n; i++) cin >> a[i];
    for(i=0; i<m; i++) cin >> b[i];
    sort(b, b+m);

    int ans = 0;
    for(i=0; i<n; i++){
        if(a[i] <= b[0]) continue;

        int hi,lo,mid,target = a[i],add;
        hi = m-1;
        add = lo = 0;

        while(1){
            mid = (hi + lo)/2;
            if(target > b[mid]){
                lo = mid+1;
                add = mid + 1;
            }else{
                hi = mid-1;
            }

            if(lo > hi ) break;
        }
        ans += add;
    }

    cout << ans << '\n';
}

int main(){
    FASTIO
    TEST
}