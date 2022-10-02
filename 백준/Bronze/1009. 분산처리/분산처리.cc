#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
    int i,j,k;
    int t,a,b;
    cin >> t;
    while(t--){
        cin >> a >> b;
        int ans = a;
        b -= 1;
        while(b--){
            ans *= a;
            ans %= 10;
        }
        if ( ans%10 == 0) cout << "10\n";
        else cout << ans%10 << '\n';
    }
}