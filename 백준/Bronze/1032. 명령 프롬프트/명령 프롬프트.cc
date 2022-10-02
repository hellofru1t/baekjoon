#include <stdio.h>
#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <vector>

typedef long long ll;
using namespace std;

int main(){
    int i,j,k;
    int n,len;
    string a[51];
    string ans;
    cin >> n;
    for (i=0; i<n; i++){
        cin >> a[i];
    }
    ans = a[0];
    len = a[0].size();
    for(i=1; i<n; i++){
        for(j=0; j<len; j++){
           if(ans[j] != a[i][j]){
            ans[j] = '?';
           }
        }
    }
    cout << ans;
}