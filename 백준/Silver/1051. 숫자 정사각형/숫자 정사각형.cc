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
bool check(int a, int b, int c, int d){
    if ( a == b & b == c & c ==d ) return 1;
    else return 0;
}

void solve(){
    int i,j,k;
    int arr[51][51];
    int n,m, ans = 1;
    cin >> n >> m;
    for(i=0; i<n; i++){
        string s; cin >> s;
        for(j=0; j<m; j++) arr[i][j] = s[j] - '0'; 
    }
    int len = min(n,m);
    for(k=1; k<len; k++){
        for(i=0; i<n - k ; i++){
            for(j=0; j<m - k ; j++){
                if(check(arr[i][j], arr[i][j+k], arr[i+k][j],arr[i+k][j+k]) ){
                    ans = (k + 1 )* ( k + 1) ;
                }
            }
        }
    }
    cout << ans;
}

int main(){
    FASTIO
    solve();
}