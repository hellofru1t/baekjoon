#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

bool as(int a[]){
    for(int i=0; i<8; i++){
        if ( i + 1 != a[i])
        return 0;
    }
    return 1;
}
bool de(int a[]){
    for(int i=0; i<8; i++){
        if ( a[i] != 8 - i)
            return 0;
    }
    return 1;
}
int main(){
    int i,j,k;
    int arr[10];
    for (i=0; i<8; i++) cin >> arr[i];

    if(as(arr)) cout << "ascending";
    else if(de(arr)) cout << "descending";
    else cout << "mixed";
}