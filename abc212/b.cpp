#include <bits/stdc++.h>
using namespace std;

int main(void){
  int x[4];
  for(int i=0;i<4;i++){
    char c ;
    cin >> c;
    x[i] = c - 0x30 ;
  }
  if ( x[0] == x[1] && x[0] == x[2] && x[0] == x[3] ) {
    cout << "Weak" << endl;
    return 0;
  }
  int cnt = 0 ;
  for(int i=0;i<3;i++){
    if ( ( ( x[i] + 1 ) % 10 ) == x[i+1] ) {
      cnt++;
    }
  }
  if ( cnt == 3 ) {
    cout << "Weak" << endl;
  }
  else {
    cout << "Strong" << endl;
  }
  return 0;
}
