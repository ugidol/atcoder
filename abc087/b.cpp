#include <bits/stdc++.h>
using namespace std;

int main(void){
  long A, B, C, X;
  cin >> A ;
  cin >> B ;
  cin >> C ;
  cin >> X ;
  long num = 0;
  for(long l0 = 0 ; l0 <= A ; l0++){
    for(long l1 = 0 ; l1 <= B ; l1++){
      for(long l2 = 0 ; l2 <= C ; l2++){
        long val = ( 500 * l0 ) + ( 100 * l1 ) + ( 50 * l2 ) ;
        if ( val == X ) {
          num++;
        }
      }
    }
  }
  cout << num << endl;
  return 0;
}
