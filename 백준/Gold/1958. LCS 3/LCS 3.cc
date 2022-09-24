#include <bits/stdc++.h>

using namespace std;
typedef pair<int,int> pii;
typedef long long ll;
typedef unsigned long long ull;


int dp[101][101][101];
int main(){
    int i,j,k;
    string a,b,c; cin >> a >> b >> c;
    for(i=1; i<=a.size(); i++){
        for(j=1; j<= b.size(); j++){
            for(k=1; k<= c.size(); k++){
                if(a[i-1] == b[j-1] && b[j-1] == c[k-1] ){
                    dp[i][j][k] = dp[i-1][j-1][k-1] +1;
                }else{
                    dp[i][j][k] = max(dp[i][j][k-1] , max(dp[i][j-1][k],dp[i-1][j][k]));
                }
            }
        }
    }
    cout << dp[a.size()][b.size()][c.size()];
}