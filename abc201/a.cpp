#include <bits/stdc++.h>
using namespace std;
int main(void){
  vector<int> A(3);
  for(int i=0;i<3;i++){
    cin >> A[i];
  }
  sort(A.begin(), A.end());
  string ans = "No";
  if ( abs(A[2]-A[1]) == abs(A[1]-A[0]) ) {
    ans = "Yes";
  }
  cout << ans << endl;
  return 0;
}
