#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N,Q;
  cin >> N >> Q;
  map<int,vector<int>> mp;
  for(int i=0;i<N;i++){
    int a;
    cin >> a;
    vector<int> &vec = mp[a];
    vec.push_back(i+1);
  }
  //
  for(int i=0;i<Q;i++){
    int x,k;
    cin >> x >> k ;
    vector<int> &vec = mp[x];
    if ( vec.size() < (size_t)k ) {
      cout << -1 << endl;
    }
    else {
      cout << vec[k-1] << endl;
    }
  }
  return 0;
}
