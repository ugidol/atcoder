#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  string S;
  cin >> S;
  int A = 0;
  int T = 0;
  for(int i=0;i<N;i++){
    char c = S[i];
    if ( c == 'A' ) {
      A += 1;
    }
    else {
      T += 1;
    }
  }
  if ( A > T ) {
    cout << 'A' << endl;
  }
  else if ( A < T ) {
    cout << 'T' << endl;
  }
  else {
    if ( S[N-1] == 'A' ) {
      cout << 'T' << endl;
    }
    else {
      cout << 'A' << endl;
    }
  }
  return 0;
}
