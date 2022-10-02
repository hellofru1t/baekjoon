#include <bits/stdc++.h>

using namespace std;


int main(){
    int i,j,k;
    int check,ans;
    ans = 0;
    string a;
    getline(cin, a);
    int len = a.size();
    a += ' ';
    for(i=0; i<len; i++){
        if(  (( a[i] >= 'a' & a[i] <= 'z' ) || ( a[i] >= 'A' & a[i] <= 'Z' )) && a[i+1] == ' ' ){
            ans++;
        }
    }
    cout << ans;
}