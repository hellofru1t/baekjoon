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

int INF = 0x3f3f3f3f;

int n,m,ans;

vector<pii> home;
vector<pii> chicken;


void solve(){
    int i,j,k;
    cin >> n >> m;
    ans = -1;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            int x; cin >> x;
            if(x == 1) home.push_back({i,j});
            if(x == 2) chicken.push_back({i,j});
        }
    }
    vector<int> p(chicken.size(),0);
    for(i=0; i<m; i++){
        p[i] = true;
    }
    sort(p.begin(), p.end());
    do{
        int sum = 0;
        for(i=0; i<home.size(); i++){
            vector<int> d;
            for(j=0; j<chicken.size(); j++){
                if(p[j]){
                    d.push_back(abs(home[i].first - chicken[j].first) + abs(home[i].second - chicken[j].second));
                }
            }
            sum += *min_element(d.begin(),d.end());
        }
        if(ans == -1 || ans > sum){
            ans = sum;
        }
    }while(next_permutation(p.begin(),p.end()));

    cout << ans;

}

int main(){
    FASTIO
    solve();
}