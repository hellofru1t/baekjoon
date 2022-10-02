#include <bits/stdc++.h>

using namespace std;

int swap(int a){
    int n;
    n = a/100  + (a/10 % 10)*10  +  (a%10 * 100 );
    return n;
}
int main(){
    int i,j,k;
    int a,b;
    cin >> a >> b;
    a = swap(a);
    b = swap(b);
    a < b ?  cout << b : cout << a;

}