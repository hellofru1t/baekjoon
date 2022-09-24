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

deque<int> dq;
stack<int> st;
string cmd,s;
void solve(){
    int i,j,k;
    int n;
    bool toggle = true;
    dq.clear();
    cin >> cmd >> n >> s;
    for(i=0; i<s.size(); i++){
        if(s[i] >= '0' && s[i] <= '9'){
            st.push(s[i]-'0');
            if(s[i+1] >= '0' && s[i+1] <= '9'){
                st.push(s[i+1]-'0');
                if(i+2 <s.size() && s[i+2] == '0'){
                    st.push(s[i+2]-'0');
                }
            }
            int num = 0;
            int ten = 1;
            i += st.size() - 1;
            while(!st.empty()){
                num += st.top() * ten;
                st.pop();
                ten *= 10;
            }
            dq.push_back(num);
        }
    }
    // insert number in deque


    for(i=0; i<cmd.size(); i++){
        if(cmd[i] == 'R'){
            toggle ^= 1;
        }else{
            if(dq.empty()){
                cout << "error\n";
                return;
            }
            if(toggle){
                dq.pop_front();
            }else{
                dq.pop_back();
            }
        }
    }

    if(dq.empty()){
        cout << "[]\n";
    }else{
        cout << "[";
        if(toggle){
            for(i=0; i<dq.size()-1; i++){
                cout << dq[i] << ",";
            }
            cout << dq.back() << "]\n";
        }else{
            for(i=dq.size()-1; i>0; i--){
                cout << dq[i] << ",";
            }
            cout << dq.front() << "]\n";
        }
    }


}

int main(){
    FASTIO
    TEST
}