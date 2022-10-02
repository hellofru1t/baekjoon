#include <bits/stdc++.h>

using namespace std;
typedef long long ll;


int main(){
    int i,j,k;
    int n,f,a;
    cin >> n>>f;
    n-= (n%100);
    while( n%f != 0){
        n++;
    }
    a = n%100;
    if(a < 10){
        cout << "0" << a;
    }else{
        cout << a;
    }
}