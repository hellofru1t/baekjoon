#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ldb;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;
#pragma warning(disable:4996)

#define FASTIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


pii arr[101];
int dp[10001];

void solve(){
    int i,j,k;
    int n,m; cin >> n >> m;
    int sum = 0;
    for(i=0; i<n; i++) cin >> arr[i].first;
    for(i=0; i<n; i++){
        cin >> arr[i].second;
        sum += arr[i].second;
    }

    for(i=0; i<n; i++){
        int val = arr[i].first;
        int cost = arr[i].second;
        for(j=sum; j>=cost; j--){
            dp[j] = max(dp[j], dp[j-cost] + val);
        }
    }
    for(i=0; i<=sum; i++){
        if(dp[i] >= m){
            cout << i;
            break;
        }
    }
}
int main(){
    FASTIO
    solve();
}