#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int i,j;
    long long int ans = 0;
    string color[5];
    string s[] = {"black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white"};
    int arr[] = { 1 ,10 ,100 ,1000, 10000, 100000 ,1000000, 10000000, 100000000 ,1000000000 };
    cin >> color[0] >> color[1] >> color[2];
    for ( i = 0; i < 10; i++) {
        if (color[0] == s[i] ) 
            ans += (i * 10);
        if ( color[1] == s[i] )
            ans += i;
        
    }

    for (i = 0; i < 10; i++){
        if (color[2] == s[i])
            ans *= arr[i];
    }
    cout << ans;

}