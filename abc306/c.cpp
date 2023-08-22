#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N ;
  map<int,int> mp;
  vector<pair<int,int>> vec;
  for(int i=0;i<(3*N);i++){
    int v;
    cin >> v;
    mp[v] += 1;
    if ( mp[v] == 2 ) {
      pair<int,int> p = make_pair(i+1,v);
      vec.push_back(p);
    }
  }
  sort(vec.begin(), vec.end(), [](pair<int,int> a, pair<int,int> b){ return a.first < b.first ;} );
  //
  for(auto itr : vec ) {
    cout << itr.second << ' ';
  }
  cout << endl;
  //
  return 0;
}
