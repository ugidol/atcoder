
#include <bits/stdc++.h>
using namespace std;
int main(void){
  string S;
  cin >> S;
  for(int i=0;i<(int)S.size();i++){
    char c = S[i];
    cout << c ;
    if ( i < ((int)S.size()-1) ) {
      cout << ' ';
    }
  }
  cout << endl;
  return 0;
}
