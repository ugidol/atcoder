#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N,A,B;
  cin >> N >> A >> B;
  vector<int> D(N);
  for(int i=0;i<N;i++){
    cin >> D[i];
  }
  vector<int> vec(N);
  for(int i=0;i<N;i++){
    vec[i] = D[i] % (A+B) ;
  }
  sort(vec.begin(), vec.end());
  //vec.erase(unique(vec.begin(), vec.end()),vec.end());
  vec.push_back(vec[0]+(A+B));
  string ans = "No";
  for(int i=0;i<(int)vec.size()-1;i++){
    int j = i + 1;
    int d = vec[j] - vec[i];
    if ( d > B ) {
      ans = "Yes";
      break;
    }
  }
  cout << ans << endl;
  return 0;
}
