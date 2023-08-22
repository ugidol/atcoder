#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  vector<int> A(N);
  for(int i=0;i<N;i++){
    cin >> A[i];
  }
  //
  cout << A[0] << ' ';
  for(int i=1;i<N;i++){
    int diff = abs(A[i-1] - A[i]);
    if ( diff == 1 ) {
      cout << A[i] << ' ';
    }
    else {
      if ( ( A[i-1] - A[i] ) < 0 ) {
        for(int j=1;j<diff;j++){
          cout << A[i-1] + j << ' ';
        }
        cout << A[i] << ' ';
      }
      else {
        for(int j=1;j<diff;j++){
          cout << A[i-1] - j << ' ';
        }
        cout << A[i] << ' ';
      }
    }
  }
  cout << endl;
  return 0;
}
