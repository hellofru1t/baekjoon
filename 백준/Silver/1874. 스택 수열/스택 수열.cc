#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int i,j,k;
    int n, num = 1,idx = 0;
    stack<int> s;
    string a;
    cin >> n;
    int arr[100001];
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    while(num <= n){
        if(s.empty()){
            s.push(num++);
            a += "+";
        }
        if(arr[idx] != s.top()){
            s.push(num++);
            a += "+";
        }else{
            while(arr[idx] == s.top()){
                s.pop();
                a+= "-";
                idx++;
                if(s.empty()) break;
            }
        }
    }
    if(!s.empty()) {
        while (arr[idx] == s.top()) {
            s.pop();
            a += "-";
            idx++;
            if (s.empty()) break;
        }
    }
    if(s.empty()) {
        for (i = 0; i < a.size(); i++) {
            printf("%c\n", a[i]);
        }
    }else cout << "NO";
}