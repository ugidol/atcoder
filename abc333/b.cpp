#include <bits/stdc++.h>
using namespace std;
int main(void){
  array<char,2> S;
  cin >> S[0] >> S[1] ;
  array<char,2> T;
  cin >> T[0] >> T[1] ;
  if ( S[0] < S[1] ){
    swap(S[0],S[1]);
  }
  if ( T[0] < T[1] ) {
    swap(T[0],T[1]);
  }
  int a = min(S[0]-S[1],S[1]+5-S[0]);
  int b = min(T[0]-T[1],T[1]+5-T[0]);
  string ans = "No";
  if ( a == b ) {
    ans = "Yes";
  }
  cout << ans << endl;
  return 0;
}