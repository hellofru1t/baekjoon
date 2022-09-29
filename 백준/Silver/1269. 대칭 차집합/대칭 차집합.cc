#include <bits/stdc++.h>
using namespace std;
map <int,int> m;
int aSize,bSize, ans;
int a[200001];
int b[200001];
int main(){
    cin >> aSize >> bSize;
    int i; 
    for( i = 0; i < aSize; i++) cin >> a[i];
    for( i = 0; i < bSize; i++) cin >> b[i];
    for( i = 0; i < aSize; i++) m[a[i]]++;
    for( i = 0; i < bSize; i++) if(m[b[i]]) ans++;
    cout << aSize + bSize - ans * 2 <<'\n';
}