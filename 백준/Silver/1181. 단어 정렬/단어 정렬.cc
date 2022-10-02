#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

string a[20001];

bool cmp(string a , string b){
    if (a.size() < b.size()){
        return true;
    }else if(a.size() == b.size()){
        if (a < b) return true;
        else {
            return false;
        }
    }else return false;
}


int main(){
    int i,j,k;
    int n;
    cin >> n;
    for(i=0; i<n;i++) cin >> a[i];
    sort(a,a+n, cmp);
    cout << a[0] << '\n';
    for(i=1; i<n; i++){
        if( a[i] != a[i-1])
        cout << a[i] <<'\n';
    }
}