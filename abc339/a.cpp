#include <bits/stdc++.h>
using namespace std;
int main(void){
  string S;
  cin >> S;
  int idx = (int)S.size()-1;
  for(int i=0;i<(int)S.size();i++){
    char c = S[S.size()-1-i];
    if ( c == '.' ) {
      idx += 1;
      break;
    }
    idx -= 1;
  }
  for(int i=idx;i<(int)S.size();i++){
    char c = S[i];
    cout << c ;
  }
  cout << endl;
  return 0;
}
