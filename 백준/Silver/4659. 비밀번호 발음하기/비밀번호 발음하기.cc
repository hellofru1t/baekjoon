#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ldb;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<double, double> pdd;
#define fi first
#define se second
#define FASTIO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define TEST int tt; cin >> tt; while(tt--) solve();


void solve(){
    int i,j,k;
    char cmp[] = {'a','e','i','o','u'};
    while(1){
        string s; cin >> s;
        if(s == "end") break;
        bool ok = true;
        bool col = false;
        int a,b;
        a=0; b = 0;
        for(i=0; i<s.size(); i++){
            if(i) if(s[i] == s[i-1] && (s[i] != 'e' && s[i] != 'o')) ok = false;
            bool check = false;
            for(j=0; j<5; j++){
                if(s[i] == cmp[j]) check = true,col = true;
            }
            if(check) a++,b=0;
            else b++,a=0;

            if(a == 3 || b == 3) ok = false;
        }
        if(!col) ok = false;

        ok ?  cout << '<' << s << "> is acceptable.\n" :  cout << '<' << s << "> is not acceptable.\n";
    }
}

int main() {
    FASTIO
    solve();
}