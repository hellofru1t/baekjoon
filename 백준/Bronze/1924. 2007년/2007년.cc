#include <bits/stdc++.h>

using namespace std;
typedef long long ll;


int main() {
    int i,j,k;
    int arr[100] = {31,28,31,30,31,30,31,31,30,31,30,31};
    string a[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    int x,y,day;
    cin >> x >> y;
    day = y;
    for(i=0; i<x-1; i++){
        day += arr[i];
    }
    cout << a[day%7];
}
