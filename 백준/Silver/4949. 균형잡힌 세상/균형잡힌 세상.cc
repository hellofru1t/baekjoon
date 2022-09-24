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

stack<char> st;
bool ok(char num){
    if(!st.empty()){
        if(num == ')' && st.top() == '('){
            st.pop();
            return true;
        }else if(num == ']' &&  st.top()== '['){
            st.pop(); 
            return true;
        }else{
            return false;
        }
    }else return false;
}
void solve(){
    int i,j,k;
    while(1){
        bool check = true; 
        string s;
        getline(cin,s);
        if(s == ".") break;
        for(i=0; i<s.size(); i++){
            if(s[i] == '(' || s[i] == '[') st.push(s[i]);
            if(s[i] == ')' || s[i] == ']') {
                if(!ok(s[i])){
                    check = false; 
                }
            }
        }
        st.empty() && check ? cout << "yes\n" : cout << "no\n";
        while(!st.empty()) st.pop(); 
    }
}
int main(){
    FASTIO
    solve();
}