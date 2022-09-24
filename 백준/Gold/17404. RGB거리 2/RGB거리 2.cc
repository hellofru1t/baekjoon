#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ldb;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;
typedef tuple<int, int, int> tiii;
#define FASTIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int DP[1001][3];
int arr[1001][3];
int n;
int INF = 0x3f3f3f3f;
int get(int high, int start, int end) {
    int i, j;
    int result = n * 1000;
    for (i = 0; i < 3; i++) {
        if(i != end &&  i != start){
          int num = ( arr[high-3][start] + arr[high-2][i] + arr[high-1][end] );
            if(num < result) result = num;
        }
    }
    return result;
}

void solve(){
    int i,j,k;
    int temp;
     cin >> n;
    int ans = 1000 * n;

    for(i=0;i<n; i++){
        for(j=0; j<3; j++){
            cin >> arr[i][j];
        }
    }
    if(n == 2){
        for(i=0; i<3; i++){
            for(j=0; j<3; j++){
                if(i != j ){
                   int num = arr[0][i] + arr[1][j];
                   if(ans > num ) ans = num;
                }
            }
        }
        cout << ans;
        return;

    }
    if(n == 3){
        int num;
        for(i=0; i<3; i++){
            for(j=0; j<3; j++){
                if(i != j){
                    num = get(n,i,j);
                    if(ans > num) ans = num;
                }
            }
        }
        cout << ans;
    }else{

        for(int start = 0; start<3; start++){
            for(int end = 0; end<3; end++){
                if(start == end ) continue;
                else{
                    DP[0][start] = arr[0][start];
                    DP[0][( start+1) % 3 ] = INF;
                    DP[0][( start+2) % 3 ] = INF;
                    for(i=1; i<n-3; i++){
                       DP[i][0] = min(DP[i-1][1], DP[i-1][2]) + arr[i][0];
                       DP[i][1] = min(DP[i-1][0], DP[i-1][2]) + arr[i][1];
                       DP[i][2] = min(DP[i-1][0], DP[i-1][1]) + arr[i][2];
                    }

                    int num0 = get(n,0, end);
                    int num1 = get(n, 1, end);
                    int num2 = get(n, 2, end);

                    DP[n-3][0] = min(DP[n-4][1], DP[n-4][2]) + num0;
                    DP[n-3][1] = min(DP[n-4][0], DP[n-4][2]) + num1;
                    DP[n-3][2] = min(DP[n-4][0], DP[n-4][1]) + num2;
                    temp = min(DP[n-3][0] , min(DP[n-3][1], DP[n-3][2]));


                    if(ans > temp) ans = temp;
                }
            }
        }

        cout << ans;
    }

}
int main(){
    FASTIO
    solve();
}