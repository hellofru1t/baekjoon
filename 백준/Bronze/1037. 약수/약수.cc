#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int i,j,k;
    int arr[51];
    int n;
    cin >>n;
    for(i=0; i<n;i++){
        scanf("%d", &arr[i]);
    }
    int max , min;
    max = min = arr[0];

    for(i=1; i<n; i++){
        if(max > arr[i]) max = arr[i];
        if(min < arr[i]) min = arr[i];
    }
    cout << max * min;
}