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
    int n,temp,ans = 0;
    int arr[11];
    cin >> n >> k;
    for(i=0; i<n;i++){
        cin >> arr[i];
    }
    for(i=n-1; i>0; i--){
        if( k >= arr[i]){
            temp =  k%arr[i];
            ans  +=  k/arr[i];
            k = temp;
        }
    }
    while(k > 0){
        k -= arr[0];
        ans++;
    }
    cout << ans;
}


int main(){
    FASTIO
    solve();
}