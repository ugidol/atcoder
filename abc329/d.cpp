
#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N,M;
  cin >> N >> M;
  vector<int> vec(N);
  function<bool(pair<int,int>&,pair<int,int>&)> compare = [&](pair<int,int> &a, pair<int,int> &b){
    if ( a.second == b.second ) {
      return b.first < a.first;
    }
    else {
      return a.second < b.second;
    }
  };
  priority_queue< 
    pair<int,int>,
    vector<pair<int,int>>, 
    decltype(compare)> que{compare};
  for(int i=0;i<M;i++){
    int a ;
    cin >> a;
    vec[a-1] += 1;
    pair<int,int> p = make_pair(a,vec[a-1]);
    que.push(p);
    pair<int,int> pp = que.top();
    cout << pp.first << endl;
  }
  return 0;
}
