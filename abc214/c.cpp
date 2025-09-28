#include <bits/stdc++.h>
using namespace std ;

void func(int i, long n, vector<long> &s, vector<long> &t){
  //
  int next = i + 1 ;
  if ( next >= n ) {
    next = 0;
  }
  //
  if ( s[i] + t[i] >= t[next] ) {
    return ;
  }
  //
  t[next] = s[i] + t[i];
  func(next, n, s, t);
}

int main(void){
  long n ;
  /* N */
  cin >> n ;
  /* S */
  vector<long> S(n);
  for(int i=0;i<n;i++){
    long s ;
    cin >> s ;
    S[i] = s;
  }
  /* T */
  vector<long> T(n);
  for(int i=0;i<n;i++){
    long t;
    cin >> t;
    T[i] = t;
  }
  func(0, n, S, T);
  for(int i=0;i<n;i++){
    func(i,n,S,T);
  }
  //
  for(int i=0;i<n;i++){
    cout << T[i] << endl;
  }
  return 0;
}
