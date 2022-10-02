#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

double PI = 3.14159265358979 ;

int main(){
  int i,j,k;
  ll mid, min ,max,cnt;
  ll n,target;
  target = 0;
  int arr[10001];
  cin >> n >> k;
  for(i=0;i<n;i++) scanf("%d",&arr[i]);
  sort(arr ,arr + n);
  min = 1; max = arr[n-1];


  while(min < max){
      mid =  ( max + min) / 2;
      cnt = 0;
      for(i=0; i<n; i++){
          cnt += arr[i]/ mid;
          if ( cnt >= k) break;
      }
      if(cnt >= k){
          target = mid;
          min = mid + 1;
      }else{
          max = mid;
      }
  }
  cnt = 0 ;
  for(i=0;i<n;i++){
      cnt += arr[i]/max;
      if ( cnt >= k ) target = max;
  }
  cout << target;
}
