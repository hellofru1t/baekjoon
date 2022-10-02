#include <bits/stdc++.h>

using namespace std;

typedef long long ll;



int main(){
    int i,j,k;
    int n,sum =0;
    string a[10]  = {"ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
    string stl;
    cin >> stl;
    for(i=0; i<stl.size();i++){
        for(j=0; j<8; j++){
            if ( j == 5 || j == 7){
                for(k=0; k<4; k++){
                    if(stl[i] == a[j][k]){
                        sum += 2 + ( j + 1 );
                    }
                }
            }else{
                for(k=0; k<3; k++){
                    if(stl[i] == a[j][k]){
                        sum += 2 + ( j + 1 );
                    }
                }
            }
        }
    }
    cout << sum;
}