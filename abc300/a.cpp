#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N,A,B;
  cin >> N >> A >> B;
  for(int i=0;i<N;i++){
    int C;
    cin >> C;
    if ( C == ( A + B ) ) {
      cout << (i+1) << endl;
      break;
    }
  }
  return 0;
}
