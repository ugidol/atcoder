#include <bits/stdc++.h>
using namespace std ;

int main(void){
  int n;
  cin >> n ;
  vector<long long> vec(n);
  long long sum = 0;
  for(int i=0;i<n;i++){
    cin >> vec[i] ;
    sum += vec[i];
  }
  long long x ;
  cin >> x ;
  //
  long long k1 = 0;
  k1 = x / sum * n ;
  x = x % sum ;
  //cout << y << endl ;
  long long k2 = 0;
  while(x>=0){
    x -= vec[k2%n];
    k2 += 1;
  }
  cout << k1 + k2 << endl ;
  return 0;
}
