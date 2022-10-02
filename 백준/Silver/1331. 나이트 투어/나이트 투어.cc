#include <bits/stdc++.h>
using namespace std;
vector<string> v(36);

int dy[8] = { -2,-1,1,2,2,1,-1,-2 };
int dx[8] = { 1,2,2,1,-1,-2,-2,-1 };
void input() {
    for (int i = 0; i < 36; i++){
        cin >> v[i];
    }
}
bool isrange(int y, int x) {
    return 0 <= y && y < 6 && 0 <= x && x < 6;
}

bool check(int y,int x,int by,int bx){
    for (int i = 0; i < 8; i++) {
        int diry = y - by;
        int dirx = x - bx;
        if (dy[i] == diry && dx[i] == dirx)return true;
    }
    return false;
}

void solve() {
    bool visit[6][6] = { 0 };
    int by = v[0][0] - 'A';
    int bx = v[0][1] - '1';
    int fy = by;
    int fx = bx;
    if (!isrange(by, bx)) {
        cout << "Invalid\n";
        return;
    }
    visit[by][bx] = 1;

    for (int i = 1; i < v.size(); i++) {
        int y = v[i][0] - 'A';
        int x = v[i][1] - '1';
        if (isrange(y, x) && !visit[y][x] && check(y, x, by, bx)) {
            visit[y][x] = 1;
            by = y;
            bx = x;
        }
        else {
            cout << "Invalid\n";
            return;
        }
    }
     
    cout << (check(fy, fx, by, bx) ? "Valid\n" : "Invalid\n");

}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    input();
    solve();
    return 0;
}
