#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    int i,j,k;
    string a;
    char check[10]{'a','e','i','o','u','A','E','I','O','U'};
    while(getline(cin,a)){
        if( a == "#") break;
        int num = 0;
        for(i=0; i<a.size(); i++) {
            for(j=0; j<10; j++){
                if(a[i] == check[j]) num++;
            }
        }
        printf("%d\n", num);
    }
}
