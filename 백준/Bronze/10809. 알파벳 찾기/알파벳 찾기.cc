#include <bits/stdc++.h>

using namespace std;

int main(){
    int i,j,k;
    int arr[30] = {0, };
    string a; cin >> a;
    for(i=0; i<a.size(); i++){
        int x = a[i] - 'a';
        if(arr[x] == 0)  arr[x] = i + 1;
    }
    for(i=0; i<26; i++){
        if(arr[i] == 0 ){
            printf("-1 ");
        }else printf("%d ",arr[i] -1 );
    }
}