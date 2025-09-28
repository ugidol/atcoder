#include <bits/stdc++.h>
using namespace std;
int main(void){
  int n,q;
  cin >> n >> q;
  vector<int> vec(n);
  for(int i=0;i<n;i++){
    cin >> vec[i];
  }
  //
  sort(vec.begin(), vec.end());
  for(int i=0;i<q;i++){
    int x;
    cin >> x;
    auto it = lower_bound(vec.begin(), vec.end(), x);
    cout << distance(it, vec.end() ) << endl;
  }
  return 0;
}
