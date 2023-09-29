#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N,X;
  cin >> N >> X;
  vector<int> A(N-1);
  for(auto &itr:A){
    cin >> itr;
  }
  vector<int> vec(101);
  for(int i=0;i<=100;i++){
    vector<int> tmp = A;
    tmp.push_back(i);
    sort(tmp.begin(), tmp.end());
    tmp.erase(tmp.begin());
    tmp.erase(tmp.end()-1);
    vec[i] = accumulate(tmp.begin(), tmp.end(), 0);
  }
  int ans = -1;
  for(int i=0;i<=100;i++){
    if ( vec[i] >= X ) {
      ans = i;
      break;
    }
  }
  cout << ans << endl;
  return 0;
}
