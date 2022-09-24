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

int arr[1000005];
stack<int> ans;
stack<int> cmp;
void solve(){
    int i,j,k;
    int n; cin >> n;
    for(i=0; i<n; i++) cin >> arr[i];
    ans.push(-1);
    cmp.push(arr[n-1]);
    for(i=n-2; i>=0; i--){
        if(cmp.top() > arr[i]){
            ans.push(cmp.top());
            cmp.push(arr[i]);
        }else{
            while(!cmp.empty()){
                if(cmp.top() > arr[i]) break;
                cmp.pop();
            }
            if(!cmp.empty()){
                ans.push(cmp.top());
            }else ans.push(-1);
            cmp.push(arr[i]);
        }
    }
    while(!ans.empty()){
        cout << ans.top() << ' ';
        ans.pop();
    }
}

int main(){
    FASTIO
    solve();
}