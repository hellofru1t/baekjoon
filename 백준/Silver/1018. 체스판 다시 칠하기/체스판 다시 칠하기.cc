#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int check(char a[][51], int x, int y){
    int i,j;
    int cnt = 0;
    for(i=0; i<8; i++){
        for(j=0; j<8; j++){
            if(j%2 == 0 && i%2 == 0){
                if(a[i+x][j+y] == 'B') cnt++;
            }else if(j%2 != 0 && i%2 == 0) {
                if (a[i+x][j+y] == 'W') cnt++;
            }
            if(i%2 != 0 && j%2 ==0){
                if(a[i+x][j+y] == 'W') cnt++;
            }else if(i%2 != 0 && j%2 !=0)
                if(a[i+x][j+y] == 'B') cnt++;
        }
    }
    if( 64 - cnt < cnt ) return 64 - cnt;
    else return cnt;
}
int main() {
    int i,j,k;
    char chess[51][51];
    int n,m,num,min = 64;
    cin >> n >> m;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            cin >> chess[i][j];
        }
    }
    for(i=0; i<n-7; i++){
        for(j=0; j<m-7; j++){
            num = check(chess,i,j);
           if ( num < min) min = num;
        }
    }
    cout << min;
}
