#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool visited[101][101];
int graph[101][101];
int n,m;
int dx[] = {0,0,-1,1};
int dy[] = {-1,1,0,0};
//상하좌우
int cnt[101][101];
void bfs(pair<int,int> target){
    visited[1][1] = true;
    queue<pair<int, int>>q;
    q.push(pair<int, int>(1,1));
    cnt[1][1]++;
    while(!q.empty()){
        pair<int,int> p = q.front();
        q.pop();
        for(int i=0; i<4; i++){
            int x = p.first +dy[i];
            int y = p.second + dx[i];
            if( ( x >= 1 && x<= n ) && ( y >= 1 && y <= m) && !visited[x][y] && graph[x][y] == 1 ){
                visited[x][y] = true;
                cnt[x][y] = cnt[p.first][p.second] + 1;
                q.push(pair<int,int>(x,y));
            }
        }
    }
}
int main(){
    cin >> n >> m;
    int num;
    for(int i=1; i<= n; i++){
        for(int j=1; j<=m; j++){
            scanf("%1d",&num);
            graph[i][j] = num;
        }
    }
    bfs(pair<int, int>(n,m));

    cout << cnt[n][m];
}