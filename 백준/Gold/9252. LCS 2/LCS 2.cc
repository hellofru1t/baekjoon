#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ldb;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;
typedef tuple<int, int, int> tiii;
#define FASTIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define TEST  int t; cin >> t; while(t--) solve();

int DP[1005][1005];

string a,b;
string ans;
void solve(){
    int i,j,k;
    cin >> b >> a;
    for(i=1; i<=a.size(); i++){
        for(j=1; j<=b.size(); j++){
            if(a[i-1] == b[j-1]){
                DP[i][j] = DP[i-1][j-1]+1;
            }else{
                DP[i][j] = max(DP[i][j-1],DP[i-1][j]);
            }
        }
    }

    int x = a.size();
    int y = b.size();

    while(x  && y ){
        if(DP[x][y] == DP[x][y-1]){
            y--; continue;
        }else if(DP[x][y] == DP[x-1][y]){
            x--; continue;
        }else if(DP[x][y] ==(DP[x-1][y-1] + 1) ){
            ans += a[x-1];
            x--; y--;
            continue;
        }
    }

    cout << DP[a.size()][b.size()] << '\n';
    reverse(ans.begin(),ans.end());
    cout << ans;
}
int main(){
    FASTIO
    solve();
}