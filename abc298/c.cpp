#include <bits/stdc++.h>
using namespace std;
int main(void){
  int N,Q;
  cin >> N >> Q;
  map<int,multiset<int>> mp1;
  map<int,set<int>> st1;
  for(int i=0;i<Q;i++){
    int n;
    cin >> n;
    if ( n == 1 ) {
      int i,j;
      cin >> i >> j;
      mp1[j].insert(i);
      st1[i].insert(j);
    }
    else if ( n == 2 ) {
      int i;
      cin >> i;
      for(auto itr : mp1[i]){
        cout << itr << ' ';
      }
      cout << endl;
    }
    else {
      int i;
      cin >> i;
      for(auto itr : st1[i]){
        cout << itr << ' ';
      }
      cout << endl;
    }
  }
  return 0;
}
