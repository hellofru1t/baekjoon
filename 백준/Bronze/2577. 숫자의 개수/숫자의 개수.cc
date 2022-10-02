#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    int i, j, k;
    int arr[11]= {0,};
    int a,b,c,d;
    cin >> a >> b>> c;
    d = a * b * c;
    while (d != 0){
        arr[d%10]++;
        d /= 10;
    }
    for(i=0;i<10;i++){
        printf("%d\n", arr[i]);
    }
}