#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N,M;
  cin >> N >> M;
  vector<vector<int>> ans;
  //
  function<void(vector<int>)> f = [&](vector<int> vec){
    if ( (int)vec.size() == N ) {
      ans.push_back(vec);
      return ;
    }
    int v = 0;
    if ( vec.size() > 0 ) {
      v = vec[ vec.size()-1 ];
    }
    for(int i=v+1;i<=M;i++){
      vec.push_back(i);
      f(vec);
      vec.pop_back();
    }
    return ;
  };
  vector<int> vec;
  f(vec);
  //
  for(auto v:ans){
    for(auto itr:v){
      cout << itr << ' ';
    }
    cout << endl;
  }
  return 0;
}
