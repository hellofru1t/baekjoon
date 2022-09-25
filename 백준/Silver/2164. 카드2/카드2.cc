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


int Q[2000001];
int tail, head;

void pop(){
    head++;
}
void swapping(){
    tail++;
    Q[tail] = Q[head];
    head++;
}

void solve(){
    int i, j, k;
    int n;
    cin >> n;
    tail = n-1;
    for (i=0; i<n; i++) Q[i] = i+1;
    n -= 1;
    while(n--){
        pop();
        swapping();
    }
    cout << Q[tail];
}

int main(){
    FASTIO
    solve();
}