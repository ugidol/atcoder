#include <bits/stdc++.h>
using namespace std;
int main(void){
  long long N;
  cin >> N;
  while(N%3==0){
    N /= 3;
  }
  while(N%2==0){
    N /= 2;
  }
  if ( N == 1 ) {
    cout << "Yes" << endl;
  }
  else {
    cout << "No" << endl;
  }

  return 0;
}
