#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ldb;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;
#define FASTIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define TEST int tt; cin >> tt; while(tt--) solve();

int n;
string s;
string ans1,ans2;
bool visited[10];

void dfs(bool ok,vector<int> v){
    if(ok && !ans2.empty()) return;
    if(!ok &&!ans1.empty()) return;
    if(v.size() == n+1){
        string tmp = "";
        bool check;

        for(int i=0; i<v.size()-1; i++){
            s[i] == '<' ? check = v[i] < v[i+1] : check = v[i] > v[i+1];
            if(!check) return;
        }

        for(auto x : v){
            char num = x + '0';
            tmp += num;
        }
        ok ? ans2  = tmp : ans1 = tmp;
        return;
    }
    if(ok){
        for(int i=0; i<10; i++){
            if(visited[i]) continue;
            visited[i] = true, v.push_back(i);
            dfs(ok,v);
            v.pop_back(), visited[i] = false;
        }
    }else{
        for(int i=9; i>=0;  i--){
            if(visited[i]) continue;
            visited[i] = true, v.push_back(i);
            dfs(ok,v);
            v.pop_back(), visited[i] = false;
        }
    }

}
void solve(){
    int i,j,k;
    cin >> n;
    for(i=0; i<n; i++){
        char tmp; cin >> tmp;
        s.push_back(tmp);
    }

    vector<int> v;
    for(i=0; i<10; i++){
        v.push_back(i),visited[i] = true;
        dfs(true, v);
        v.pop_back(),visited[i] = false;
    }
    for(i=9; i>=0; i--){
        v.push_back(i),visited[i] = true;
        dfs(false, v);
        v.pop_back(),visited[i] = false;
    }
    cout << ans1 << '\n' << ans2;
}
int main(){
    FASTIO
    solve();
}



