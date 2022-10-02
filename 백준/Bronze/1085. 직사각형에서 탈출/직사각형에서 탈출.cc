#include <bits/stdc++.h>

using namespace std;
typedef long long ll;


int main(){
    int i,j,k;
    int a,b,c,d;
    int x,y;
    cin>>a>>b>>c>>d ;
    x = min(a,c-a);
    y = min(b,d-b);
    cout << min(x,y);
}