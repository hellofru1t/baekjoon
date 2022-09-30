#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ldb;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;
#define FASTIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


int arr[50];
bool dp[15005];
void solve(){
    int i,j,k;
    int sum = 0;
    dp[0] = true; 
    int n,m; cin >> n; for(i=0; i<n; i++){
        cin >> arr[i];
    }

    for(i=0; i<n; i++){
        sum += arr[i];
        for(j=sum; j>=arr[i]; j--){
            dp[j] |= dp[j-arr[i]];
        }
    }

    for(i=0; i<n; i++){
        for(j=1; j<=sum; j++){
           dp[j] |= dp[j+arr[i]];
        }
    }
    cin >> m;
    while(m--){
        int x; cin >> x;
        if(x >  n * 500){
            cout << "N ";
            continue;
        }
        if(dp[x]) cout << "Y ";
        else cout << "N ";
    }
}
int main(){
    FASTIO
    solve();
}