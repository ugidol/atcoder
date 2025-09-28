#include <bits/stdc++.h>
using namespace std;
int main(void){
  long long A,B,K;
  cin >> A >> B >> K;
  long long cnt = 0;
  while(A<B){
    A *= K;
    cnt += 1;
  }
  cout << cnt << endl;
  return 0;
}
