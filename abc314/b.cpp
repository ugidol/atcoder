#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N;
  cin >> N;
  map<int,set<int>> mp;
  map<int,set<int>> mp2;
  for(int i=0;i<N;i++){
    int C;
    cin >> C;
    for(int j=0;j<C;j++){
      int A;
      cin >> A;
      mp[A].insert(i+1);
      mp2[i+1].insert(A);
    }
  }
  int X;
  cin >> X ;
  vector<pair<int,int>> vec;
  for(auto itr : mp[X]){
    int a = itr;
    int b = mp2[a].size();
    pair<int,int> p = make_pair(a,b);
    vec.push_back(p);
  }
  sort(vec.begin(), vec.end(), [](pair<int,int> &a, pair<int,int> &b){
      if ( a.second == b.second ) {
        return a.first < b.first ;
      }
      return a.second < b.second ;
    }
  );
  vector<pair<int,int>> ans;
  int tmp = -1;
  for(auto itr : vec){
    if ( tmp == -1 ) {
      ans.push_back(itr);
      tmp = itr.second;
      continue;
    }
    else if ( tmp == itr.second ) {
      ans.push_back(itr);
      tmp = itr.second;
    }
    else {
      break;
    }
  }
  cout << ans.size() << endl;
  for(auto itr : ans ) {
    cout << itr.first << ' ';
  }
  cout << endl;

  return 0;
}
