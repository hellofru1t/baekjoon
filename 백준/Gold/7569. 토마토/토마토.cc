#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef pair<pair<int,int> ,int > piii;

int graph[101][101][101];
int cnt[101][101][101];
bool visited[101][101][101];

int x,y,z;
int dx[6] = {1,-1,0,0,0,0};
int dy[6] = {0,0,1,-1,0,0};
int dz[6] = {0,0,0,0,1,-1};

queue<piii> start;
void bfs(){
    int xx,yy,zz,nx,ny,nz;
    queue<piii> q;
    while(!start.empty()){
        q.push(start.front());
         zz = start.front().first.first;
         yy = start.front().first.second;
         xx = start.front().second;
         visited[zz][yy][xx] = true;
         graph[zz][yy][xx] = 1;
         start.pop();
    }
    while(!q.empty()){
         zz = q.front().first.first;
         yy = q.front().first.second;
         xx = q.front().second;

         q.pop();
        for(int i=0; i<6;i++){
            nz = zz + dz[i];
            ny = yy + dy[i];
            nx = xx + dx[i];
            if(nz >= 0 && nz < z && ny >= 0 && ny < y && nx >= 0 && nx <  x ){
                if(!graph[nz][ny][nx] && graph[zz][yy][xx] == 1){
                    if(!visited[nz][ny][nx]){
                        visited[nz][ny][nx] = true;
                        graph[nz][ny][nx] = 1;
                        cnt[nz][ny][nx] = cnt[zz][yy][xx] + 1;
                        q.push(make_pair(make_pair(nz,ny),nx));
                }
              }
            }
        }
    }
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int i,j,k;

    cin >> x >> y >> z;
    for(i=0; i<z; i++){
        for(j=0; j<y; j++){
            for(k=0; k<x; k++){
                cin >> graph[i][j][k];
                if(graph[i][j][k] == 1){
                    start.push(make_pair(make_pair(i,j),k));
                }
            }
        }
    }
    bfs();
    bool check = true;
    int mx = 0;
    for(i=0; i<z; i++){
        for(j=0; j<y; j++){
            for(k=0; k<x; k++){
                if(graph[i][j][k] == 0){
                    check = false;
                }
                if(cnt[i][j][k] > mx ) mx = cnt[i][j][k];
            }
        }
    }
    check ? cout << mx : cout << "-1";
}