#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N ;
  cin >> N;
  vector<int> H(N+1);
  for(int i=0;i<N;i++){
    cin >> H[i];
  }
  H[N] = -1;
  //
  int ans = 0;
  for(int i=0;i<N;i++){
    ans = i ;
    if ( H[i] >= H[i+1]){
      break;
    }
  }
  cout << H[ans] << endl;
  return 0;
}
