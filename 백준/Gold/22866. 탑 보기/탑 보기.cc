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

ll MOD = 1000000007;
ll MOD2 = 998244353;
int INF = 0x3f3f3f3f;

int arr[100005];
pii a[100005];
stack<pii> st1;
stack<pii> st2;

void solve(){
    int i,j,k;
    int n; cin >> n;
    for(i=1; i<=n; i++) cin >> arr[i];

    st1.push({arr[1],1});
    for(i=1; i<=n; i++){
       if(st1.top().first <= arr[i]){
           while(!st1.empty()){
               if(st1.top().first <= arr[i]){
                   st1.pop();
               }else break;
           }
           if(!st1.empty()){
               a[i].first += st1.size();
               a[i].second = st1.top().second;
           }
       }else{
           a[i].first +=  st1.size();
           a[i].second =  st1.top().second;
       }
       st1.push({arr[i],i});
    }
    st2.push({arr[n],n});
    
    for(i=n; i>=1; i--){
        if(st2.top().first <= arr[i]){
            while(!st2.empty()){
                if(st2.top().first <= arr[i]){
                    st2.pop();
                }else break;
            }
            if(!st2.empty()){
                a[i].first +=  st2.size();
                if(a[i].second  == 0){
                    a[i].second = st2.top().second;
                }else{
                    int dis1 = i - a[i].second;
                    int dis2 = st2.top().second - i;
                    if(dis2 < dis1){
                        a[i].second = st2.top().second;
                    }
                }
            }
        }else{
            a[i].first += st2.size();
            if(!a[i].second){
                a[i].second = st2.top().second;
            }else{
                int dis1 = i - a[i].second;
                int dis2 = st2.top().second - i;
                if(dis2 < dis1){
                    a[i].second = st2.top().second;
                }
            }


        }
        st2.push({arr[i],i});
    }

    for(i=1; i<=n; i++){
        if(a[i].first == 0){
            cout << "0\n";
        }else{
            cout << a[i].first << ' ' << a[i].second << '\n';
        }
    }
}

int main(){
    FASTIO
    solve();
}