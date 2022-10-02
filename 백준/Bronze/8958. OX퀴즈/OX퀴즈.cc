#include <bits/stdc++.h>

using namespace std;

int main(){
    int i,j,k;
    int n,x,score;
    cin >> n;
    while(n--){
        string a; cin >> a;
        x = 1; score = 0;
        for (i=0; i<a.size(); i++){
            if ( a[i] == 'O'){
                score += x;
                x++;
            }else x = 1;
        }
        cout << score << '\n';
    }
}
