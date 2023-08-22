#include <bits/stdc++.h>
using namespace std;
int main(void){
  string S;
  cin >> S;
  string T;
  for(int i=0;i<(int)S.size();i++){
    char c = S[i];
    if ( c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ) {
      continue;
    }
    else {
      T.push_back(c);
    }
  }
  cout << T << endl;
  return 0;
}
