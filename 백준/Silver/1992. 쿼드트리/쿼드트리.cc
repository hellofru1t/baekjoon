#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ldb;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;
#define FASTIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define TEST int tt; cin >> tt; while(tt--) solve();



string s;
string str[101];
void dnc(int x, int y, int len){
    if(len == 1){
        cout << str[x][y];
        return;
    }
    bool one,zero;
    one = zero = true;
    for(int i=x; i<x+len; i++){
        for (int j=y; j<y+len; j++){
            if(str[i][j] == '0') one = false;
            if(str[i][j] == '1') zero = false;
        }
    }
    if(one){
       cout << '1';
       return;
    }
    if(zero){
        cout << '0';
        return;
    }

    cout << '(';
    dnc(x, y, len / 2);
    dnc(x, y + len / 2, len / 2);
    dnc(x + len / 2, y, len / 2);
    dnc(x + len / 2, y + len / 2, len / 2);
    cout << ')';
}
void solve(){
    int i,j,k;
    int n; cin >> n;
    for(i = 0; i < n; i++){
        cin >> s;
        for(j = 0; j < n; j++){
            str[i]+= s[j];
        }
    }
    dnc(0,0,n);
}

int main() {
    FASTIO
    solve();
}