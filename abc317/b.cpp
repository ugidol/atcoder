#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  vector<int> vec(N);
  for(auto &itr : vec){
    cin >> itr;
  }
  sort(vec.begin(), vec.end());
  int ans = 0;
  for(int i=1;i<N;i++){
    int prev = vec[i-1];
    int curr = vec[i];
    if ( ( prev + 1 ) != curr ) {
      ans = prev + 1;
      break;
    }
  }
  cout << ans << endl;
  return 0;
}
