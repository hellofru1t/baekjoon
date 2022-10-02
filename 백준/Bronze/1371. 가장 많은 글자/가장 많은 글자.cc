#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    int i, j, k;
    int idx =0;
    string a[51];
    int arr[30] = {0, };
    while(getline(cin,a[idx])){
        idx++;
    }
    for(i=0; i<idx; i++){
        for(j=0; j<a[i].size(); j++){
            if(a[i][j] != ' ') {
                int num = a[i][j] - 'a';
                arr[num]++;
            }
        }
    }
    int max = 0;
    for(i=0; i<26; i++){
        if(max < arr[i]) max = arr[i];
    }
    for(i=0; i<26; i++){
        if(max == arr[i]){
            char s = i + 'a';
            cout << s;
        }
    }
}
