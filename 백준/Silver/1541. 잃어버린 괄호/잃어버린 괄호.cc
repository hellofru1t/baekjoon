#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

vector<int> v;
vector<char> oper;
stack<int> a;
bool arr[10];
string s;
void getNumber(){
    int sum = 0; int ten = 1;
    while(!a.empty()){
        sum += ten * a.top();
        ten *= 10;
        a.pop();
    }
    v.push_back(sum);
}


int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int i,j,k;
    cin >> s;
    int x,length,ans = 0;
    for(i=0; i<s.size(); i++){
        if(s[i] != '+' && s[i] != '-'){
            x = s[i] - '0';
            a.push(x);
        }else{
            getNumber();
            oper.push_back(s[i]);
        }
    }
    getNumber();

    if(oper.size() == 0 ){
        cout << v[0];
    }else {
        for (i = 0; i < oper.size(); i++) {
            if (oper[i] == '+') {
                oper.erase(oper.begin() + i);
                int a, b;
                a = v[i];
                b = v[i + 1];
                ans = a + b;
                v.erase(v.begin() + i, v.begin() + i + 2);
                v.insert(v.begin() + i, ans);
                i = -1;
            }
        }

        for (i = 0; i < oper.size(); i++) {
            if (oper[i] == '-') {
                oper.erase(oper.begin() + i);
                int a, b;
                a = v[i];
                b = v[i + 1];
                ans = a - b;
                v.erase(v.begin() + i, v.begin() + i + 2);
                v.insert(v.begin() + i, ans);
                i = -1;
            }
        }
        cout << ans;
    }
}
