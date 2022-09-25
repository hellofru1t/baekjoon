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
    int n,idx = 0;;
    int arr[10];
    cin >> n;
    while(n){
        arr[idx] = n%2;
        idx++;
        n/= 2;
    }
    int sum =0;
    for(i=0; i< idx ; i++){
        sum += arr[i];
    }
    cout << sum;
}

int main(){
    FASTIO
    solve();
}