#include <bits/stdc++.h>

using namespace std;

int main(){
    int i,j,k;
    string a;   cin >> a; 
    int x,max,idx;
    int arr[30] = {0, };
    for(i=0; i<a.size(); i++){
        if(a[i] >= 'a' ){
           x = a[i] - 'a';
           arr[x]++;
        }else{
            x = a[i] -'A';
            arr[x]++;
        }
    }
    max = x = 0;
    for(i=0; i<26; i++){
        if(max < arr[i]){
            max = arr[i]; idx = i;
        }
    }
    for(i=0; i<26; i++){
        if(max == arr[i] &  idx != i ) x = 1;
    }
    if(x) cout << '?';
    else{
        char ans = idx + 'A';
        cout << ans;
    }
}