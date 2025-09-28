#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  vector<string> vec(N);
  for(int i=0;i<N;i++){
    cin >> vec[i];
  }
  string ans = "No";
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      if ( i == j ) {
        continue;
      }
      string ss = vec[i] + vec[j];
      //
      bool b = true;
      for(int k=0;k<(int)ss.size()/2;k++){
        if ( ss[k] != ss[ss.size()-1-k] ) {
          b = false;
          break;
        }
      }
      if ( b ) {
        ans = "Yes";
      }
    }
  }
  cout << ans << endl;
  return 0;
}
