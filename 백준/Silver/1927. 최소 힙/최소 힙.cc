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

priority_queue<int, vector<int>, greater<int>> pq;
void solve(){
    int i,j,k;
    int n,num;
    cin >> n ;
    while(n--){
      cin >> num; 
        if(!num){
            if(pq.empty()) printf("0\n");
            else{
                printf("%d\n",pq.top());
                pq.pop();
            }
        }else pq.push(num);
    }
}


int main(){
    FASTIO
    solve();
}