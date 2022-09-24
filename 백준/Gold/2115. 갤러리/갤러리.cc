#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ldb;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;

#define FASTIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int graph[1001][1001];
void solve(){
    int i,j,k,n,m;
    cin >> n >> m;
    string s;
    for(i=0; i<n; i++){
        cin >> s;
        for(j=0; j<m; j++){
            if(s[j] == 'X'){
                graph[i][j] = 1;
            }else graph[i][j] = 0;
        }
    }

    int ans = 0;

    for(i=0; i<n-1; i++){
        for(j=0; j<m-1; j++){
            if(graph[i][j]+graph[i][j+1] == 2 && !(graph[i+1][j]+graph[i+1][j+1])){
                ans++;
                j++;
            }
        }
    } 
    for(i=0; i<m-1; i++){
        for(j=0; j<n-1; j++){
            if(graph[j][i] + graph[j+1][i] == 2 && !(graph[j][i+1] + graph[j+1][i+1])){
                ans++;
                j++;
            }
        }
    } 
    for(i=1; i<n; i++){
        for(j=0; j<m-1; j++){
            if(graph[i][j]+graph[i][j+1] == 2 && !(graph[i-1][j]+graph[i-1][j+1])){
                ans++;
                j++;
            }
        }
    } 
    for(i=1; i<m; i++){
        for(j=1; j<n-1; j++){
            if(graph[j][i]+graph[j+1][i] == 2 && !(graph[j][i-1]+graph[j+1][i-1])){
                ans++;
                j++;

            }
        }
    } 
    cout << ans;
}

int main(){
    FASTIO
    solve();
}