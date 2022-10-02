#include <bits/stdc++.h>

using namespace std;

typedef long long ll;


int main(){
    int i,j,k;
    int x,n,cnt;
    cin >> n;
    int check = n;
    x = cnt = 0;
    while(1) {
        x = (n%10 + (n / 10)) % 10;
        x += (n % 10) * 10;
        n = x;
        cnt++;
        if ( x == check) break;
        if (x < 10) x *= 10;
    }
    cout << cnt;
}