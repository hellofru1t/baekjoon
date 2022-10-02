#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    int i, j, k;
    int x, y, z;
    cin >> x >> y >> z;
    int arr[100] = {0,};
    for (i = 1; i <= x; i++){
        for (j = 1; j <= y; j++) {
            for (k = 1; k <= z; k++) {
                int num = i+j+k;
                arr[num]++;
            }
        }
    }
    int max = 0;
    for(i=0; i<=x+y+z; i++){
        if(max < arr[i]) max = arr[i];
    }
    for(i=0; i<=x+y+z; i++){
        if(max == arr[i]){
            cout << i;
            break;
        }
    }
}


