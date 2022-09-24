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
queue<pii> q;

int graph[10][10];
int graphtemp[10][10];
int dx[] = {1,-1,0,0};
int dy[] = {0,0,1,-1};
bool visited[10][10];

void bfs(int nn, int mm){
    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        visited[x][y] = true;
        q.pop();
        for(int i=0; i<4; i++){
            int xx = x + dx[i];
            int yy = y + dy[i];
            if(x<nn && y<mm && xx >= 0 && yy >= 0 && !visited[xx][yy] && !graph[xx][yy]){
                graph[xx][yy] = 2;
                visited[xx][yy] = true;
                q.push(pii(xx,yy));
            }
        }
    }
}

void reset(int nn, int mm){
    int i,j;
    for(i=0; i<nn; i++){
        for(j=0; j<mm; j++){
            visited[i][j] = false;
        }
    }
}

void copygraph(int nn, int mm, pii a, pii b, pii c){
    int i,j;
    for(i=0; i<nn; i++){
        for(j=0; j<mm; j++){
            graph[i][j] = graphtemp[i][j];
        }
    }
    graph[a.first][a.second] = 1;
    graph[b.first][b.second] = 1;
    graph[c.first][c.second] = 1;
}

int counter(int nn, int mm){
    int cnt = 0;
    int i,j;
    for(i=0; i<nn; i++){
        for(j=0; j<mm; j++){
            if(!graph[i][j]) cnt++;
        }
    }
    return cnt;
}

void insert(int nn, int mm){
    int i,j;
    for(i=0; i<nn; i++){
        for(j=0; j<mm; j++){
            if(graph[i][j] == 2) q.push(pii(i,j));
        }
    }
}

void solve(){
    int i,j,k;
    int n,m;
    cin >> n >> m;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            cin >> graphtemp[i][j];
        }
    }
    pii fi,se,th;
    int cnt,size, mx = 0;
    size = n*m;
    for(i=0; i<size; i++){
        for(j=i+1; j<size; j++){
            for(k=j+1; k<size; k++){
                fi.first = i/m; fi.second = i%m;
                se.first = j/m; se.second = j%m;
                th.first = k/m; th.second = k%m;
                if(!graphtemp[fi.first][fi.second] && !graphtemp[se.first][se.second] && !graphtemp[th.first][th.second]){
                    reset(n,m);
                    copygraph(n,m,fi,se,th);
                    insert(n,m);
                    bfs(n,m);
                    cnt = counter(n,m);
                    if(mx < cnt ){
                        mx = cnt;
                    }

                }
            }
        }
    }
    cout << mx;
}
int main(){
    FASTIO
    solve(); 
}