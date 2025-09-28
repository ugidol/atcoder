#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N ;
  //
  vector<int> vec;
  vec.push_back(0);
  for(int i=0;i<N;i++){
    int a ;
    cin >> a;
    for(unsigned long j=0;j<vec.size();j++){
      vec[j] += a;
      vec[j] = ( vec[j] % 360 );
    }
    vec.insert(vec.begin(),0);
  }
  vec.push_back(360);
  sort(vec.begin(), vec.end());
  int ans = 0;
  for(unsigned long i=0;i<vec.size()-1;i++){
    ans = max(ans, vec[i+1]-vec[i]);
  }
  cout << ans << endl;
  return 0;
}
