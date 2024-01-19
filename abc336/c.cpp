#include <bits/stdc++.h>
using namespace std;
int main(void){
  long long N;
  cin >> N ;
  N -= 1;
  if ( N == 0 ) {
    cout << '0' << endl;
    return 0;
  }
  list<char> l;
  while(N>0){
    long long r = N % 5;
    l.push_front('0' + ( r * 2 ) );
    N /= 5;
  }
  string ans(l.begin(), l.end());
  cout << ans << endl;
  return 0;
}
