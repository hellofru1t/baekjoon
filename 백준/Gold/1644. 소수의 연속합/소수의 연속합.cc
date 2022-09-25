#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ldb;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;
#pragma warning(disable:4996)
#define FASTIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);


void solve(){
  int i,j,k;
    vector<bool> check;
    vector<int> prime;
    int n; cin >> n;
    check.resize(n+1, true);

    for(i=2; i*i <=n; i++){
        if(check[i] == true){

            for(j= i+i; j<=n; j+=i){
                check[j] = false;
            }
        }
    }

    for(i=2; i<=n; i++){
        if(check[i] == true ){
            prime.push_back(i);
        }
    }

    int cnt,high, low, sum;
    cnt = high = low = sum = 0;

    while(1){
        if(sum >= n){
            sum -= prime[low++];
        }else if(high == prime.size()){
            break;
        }else{
            sum += prime[high++];
        }
        if(sum == n) cnt++;
    }

    cout << cnt;

}
int main() {
    FASTIO
    solve();
}