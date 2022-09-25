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



void solve(){
    int i,j,k;
    string a;
    string b;
    char ans[100001] = "";
    char one[100001] = "";
    char stl[100001];
    int oper1,oper2,search;
    int idx = 0;
    cin >> a >> b;
    if (a.size()< b.size()) swap(a,b);
    int alen = a.size();
    int blen = b.size();
    for(i=0; i<alen; i++){
        oper1 = a[alen - 1 - i] - '0';
        oper2 = b[blen - 1 - i] - '0';
        if(blen- i > 0 ) {
            ans[idx] = ((oper1 + oper2) % 10) + '0';
            if(oper1 + oper2 > 9) one[i] = '1';
            else one[i] = '0';
        }else{
            ans[i] = a[alen-1-i];
            one[i] = '0';
        }
        idx++;
    }

    for(i=0; i<idx; i++) stl[i] = one[idx-i-1];
    for(i=0; i<idx; i++) one[i] = stl[i];
    for(i=0; i<idx; i++) stl[i] = ans[idx-i-1];
    for(i=0; i<idx; i++) ans[i] = stl[i];

    for(i=0; i<alen; i++){
        if(one[i] == '1' && i ==  0 ) cout << 1;
        else if(one[i] == '1' ){
            if(ans[i-1] != '9') {
                oper1 = ans[i-1] - '0';
                ans[i-1] = oper1 + 1 + '0';
            }else{
                search = i-1;
                while(1){
                    if(ans[search] =='9') {
                        ans[search] = '0';
                        if(search == 0) cout << 1;
                    }else{
                        oper1 = ans[search] - '0';
                        ans[search] = (oper1 + 1) + '0';
                        break;
                    }
                    search--;
                    if(search < 0)break;
                }
            }
        }
    }
    cout << ans;
}

int main(){
    FASTIO
    solve();
}