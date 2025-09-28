#include <bits/stdc++.h>
using namespace std;

int main(void){
  long N ;
  long Y ;
  cin >> N ;
  cin >> Y ;
  for(int a=0;a<=N;a++){
    for(int b=0;b<=N;b++){
      if ( a + b > N ) {
        break;
      }
      for(int c=0;c<=N;c++){
        if ( a + b + c > N ) {
          break;
        }
        if ( a + b + c != N ) {
          continue;
        }
        long val = 10000 * a + 5000 * b + 1000 * c ;
        if ( val == Y ) {
          cout << a << " " << b << " " << c << endl;
          goto loop_end;
        }
      }
    }
  }
  cout << "-1 -1 -1" << endl;
loop_end:
  return 0;
}
