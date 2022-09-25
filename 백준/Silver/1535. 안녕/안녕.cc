#include <bits/stdc++.h>

using namespace std;
typedef pair<int,int> pii;
typedef long long ll;
typedef unsigned long long ull;


int dm[101];
int en[101];
int DP[102][101];

int main(){
    int i,j,k;
    int n,m;
    cin >> n;
    for(i=1; i<=n; i++){
       cin >> dm[i];
    }
    for(i=1; i<=n; i++){
        cin >> en[i];
    }
    for(i=1; i<=n; i++){
        for(j=1; j<=100; j++){
            if(dm[i] > j){
                DP[i][j] = DP[i-1][j];
            }else{
                DP[i][j] = max(DP[i-1][j] , en[i] + DP[i-1][j-dm[i]]);
            }
        }
    }

    cout << DP[n][99];
}