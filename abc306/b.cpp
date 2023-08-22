#include <bits/stdc++.h>
using namespace std;
int main(void){
  vector<int> A(64);
  for(long long i=0;i<64;i++){
    unsigned long long Ai;
    cin >> Ai;
    A[63-i] = Ai;
  }
  unsigned long long ans = 0;
  for(int i=0;i<(int)A.size();i++){
    ans = ans << 1 ;
    ans += A[i];
  }
  cout << ans << endl;
  return 0;
}
