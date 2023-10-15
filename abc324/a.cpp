#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  vector<int> A(N);
  for(auto &itr:A){
    cin >> itr;
  }
  string ans = "Yes";
  for(int i=1;i<N;i++){
    if ( A[i-1] != A[i] ) {
      ans ="No";
      break;
    }
  }
  cout << ans << endl;
  return 0;
}
