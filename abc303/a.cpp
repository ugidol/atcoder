#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  string S;
  cin >> S;
  for(int i=0;i<N;i++){
    if ( S[i] == '1' ) {
      S[i] = 'l';
    }
    else if ( S[i] == '0' ) {
      S[i] = 'o';
    }
  }
  string T;
  cin >> T ;
  for(int i=0;i<N;i++){
    if ( T[i] == '1' ) {
      T[i] = 'l';
    }
    else if ( T[i] == '0' ) {
      T[i] = 'o';
    }
  }
  if ( T == S ) {
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }
  return 0;
}
