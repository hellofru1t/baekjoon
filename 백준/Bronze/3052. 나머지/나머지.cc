#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    int i, j, k;
    int num,sum = 0;
    int arr[42] = {0,};
    for(i=0;i<10;i++){
        cin >> num;
        arr[num%42]++;
    }
    for(i=0; i<42;i++){
        if (arr[i]){
          sum++;
        }
    }
    cout << sum;
}