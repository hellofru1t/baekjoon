#include <bits/stdc++.h>

using namespace std;

typedef long long ll;


int main(){
    int i,j,k;
    int cnt = 0;
    string chess[10];
    for(i=0; i<8; i++){
        cin >> chess[i];
    }
    for(i=0; i<8; i++){
        for(j=0; j<8; j++){
            if( i % 2 == 0 ){
                if ( j % 2  == 0 ) { if  (chess[i][j] == 'F' ) cnt++; }
            }else{
                if (j % 2 == 1 )  { if  (chess[i][j] == 'F' ) cnt++; }
            }
        }
    }
    cout << cnt;
}