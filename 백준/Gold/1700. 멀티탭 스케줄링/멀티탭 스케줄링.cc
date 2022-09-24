#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ldb;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;
#define FASTIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define TEST int tt; cin >> tt; while(tt--) solve();

int MOD = 1000000007;
ll MOD2 = 998244353;
int INF = 0x3f3f3f3f;

int a[105];
int cmp[105];
bool b[105];

priority_queue<int, vector<int>, greater<int>> pq;

void solve(){
    int i,j,k;
    int n; cin >> n >> k;
    int ans = 0;
    int con = 0;


    for(i=0; i<k; i++){
        cin >> a[i];
        cmp[a[i]]++;
    }

    for(i=0; i<k; i++){
        if(con < n && !b[a[i]]){
            con++; b[a[i]] = true;
            cmp[a[i]]--; continue;
        }

        if(b[a[i]]){
            cmp[a[i]]--; continue;
        }

        for(j=1; j<=k; j++){
            if(b[j] && !cmp[j]){
                b[a[i]] = true;
                cmp[a[i]]--; 
                b[j] = false;
                ans++;
                break;
            }
        }
        if(b[a[i]]) continue;

        int lastidx = 0;
        for(j=1; j<=k; j++){
            if(b[j]){
                for(int ii = i+1; ii<k; ii++){
                    if(a[ii] == j){
                        lastidx = max(lastidx, ii);
                        break;
                    }
                }
            }
        }
        b[a[lastidx]] = false;
        b[a[i]] = true;
        cmp[a[i]]--;
        ans++;
    }

    cout << ans;
}

int main(){
    FASTIO
    solve();
}